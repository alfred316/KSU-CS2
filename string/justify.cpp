//Alfred Shaker
//
#include "string.h"
#include <fstream>

void help();
void justifyFile(int, int,std::ifstream &,std::ofstream &);

// ./justify 10 50 input.txt output.txt
int main(int argc, char const* argv[])
{
  // Check the count of arguments
  if (argc < 4) {
    help();
  }

  // Gets the input file
  std::ifstream in(argv[3]);

  // Checks if input file is valid
  if (!in) {
    std::cerr << "Couldn't open file '" << argv[3] << "'. Please try again." << std::endl;
    help();
  }

  int left = atoi(argv[1]),
    right = atoi(argv[2]);

  if (left < 0 || right > 99 || left >= right) {
    std::cerr << "You're width parameters are invalid, please try again." << std::endl;
    help();
  }

  // Justify text
  myString input, result;


  // Outputs the justify stuff
  std::ofstream out;
  if (argc == 4) {
    out.open("/dev/stdout");
  } else if (argc == 5) {
    out.open(argv[4]);
  }
  if (!out) {
    std::cerr << "Couldn't open file '" << argv[4] << "' for writing. Please try again." << std::endl;
    help();
  }

  justifyFile(left,right-left+1, in, out);
  in.close();
  out.close();
  

  return 0;
}

void justifyFile(int left, int width, std::ifstream& in,std::ofstream& out){
  myString line, word;
  while(!in.eof()){

    in>>word;
    if(in.eof())
      break;

    if(line.length()+word.length() + 1 <= width){
      if(line=="")
	line=word;
      else
	line=line + " " + word;
    }
    else{
      line = line.justify(width);
      for (int i=0; i<left; ++i)
	out << " ";
      out << line << '\n';
      line=word;
    }

  }
  for (int i=0; i<left; ++i)
    out << " ";
  out << line << '\n';  
}


void help()
{
  std::cout << "Usage: " << std::endl;
  std::cout << "\t./justify [left] [right] [input] [output]" << std::endl;
  std::cout << "\tleft: integer value of the left offset." << std::endl;
  std::cout << "\tright: integer value of the right offset." << std::endl;
  std::cout << "\tinput: file of text to be justified." << std::endl;
  std::cout << "\toutput: optional file where justified text will be written. If not specified, text will be printed to screen." << std::endl;
  exit(1);
}
