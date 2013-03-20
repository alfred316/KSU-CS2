###############################################################
# Justify & String
#
# CS 23001 Kent State University
# Make file for Project 2
#
# This makefile will work for all parts of the project.  
# However, you will need to modify the "tests" rules as
# you add new test cases.   
# 1) add test case to "Variables" section
# 2) add test to "Run all tests" section
# 3) add test to "clean"
#

###############################################################
# Variables
CPP     = g++
OPTIONS = -g -Wall -W -Wunused -Wuninitialized -Wshadow 

EXE1 = test_default_ctor test_c_str_ctor

# You will need to add your other test cases here.
# For example: test_plus
EXE2 = test_length test_substr test_relational_operations test_findchar test_findstring test_addition test_subscript test_cout test_cin test_reallocate test_swap test_nextBlank test_nextNonBlank test_justify

###############################################################
# The first rule is run if only make is typed
msg:
	@echo 'Targets are:'
	@echo '  string'
	@echo '  tests'
	@echo '  justify'    
	@echo '  clean'

###############################################################
# Run all tests
# 
# You will need to add your other below:
# For example: ./test_plus
#
string: $(EXE1) $(EXE2)
	./test_default_ctor
	./test_c_str_ctor
	./test_length
	./test_substr
	./test_relational_operations
	./test_findchar
	./test_findstring
	./test_addition
	./test_subscript
	./test_cout
	./test_cin
	./test_reallocate
	./test_swap
	./test_nextBlank
	./test_nextNonBlank
	./test_justify
tests: string
valgrind: $(EXE1) $(EXE2)
	valgrind ./test_default_ctor
	valgrind ./test_c_str_ctor
	valgrind ./test_length
	valgrind ./test_substr
	valgrind ./test_relational_operations
	valgrind ./test_findchar
	valgrind ./test_findstring
	valgrind ./test_addition
	valgrind ./test_subscript
	valgrind ./test_cout
	valgrind ./test_cin
	valgrind ./test_reallocate
	valgrind ./test_swap
	valgrind ./test_nextBlank
	valgrind ./test_nextNonBlank
	valgrind ./test_justify

###############################################################
# Compile string 
#
string.o: string.h string.cpp
	$(CPP) -c $(OPTIONS) string.cpp

###############################################################
# Compile Justify 
#
justify:justify.o string.o
	$(CPP) $(OPTIONS) -o justify justify.o string.o
	./justify 10 50 data2-1.txt output.txt

justify.o: justify.cpp string.h
	$(CPP) -c $(OPTIONS) justify.cpp


###############################################################
# Compile all test programs
#
test_%: string.o test_%.o
	$(CPP) string.o test_$*.o -o test_$*

test_%.o: string.h test_%.cpp
	$(CPP) $(OPTIONS) -c test_$*.cpp

###############################################################
# clean 
# Removes all .o files and all executables
#
# You will need to add your other test cases executables here.
# For example: test_plus
clean:
	rm -f *.o
	rm -f test_c_str_ctor test_default_ctor
	rm -f test_length test_substr test_relational_operations test_findchar test_findstring test_addition test_subscript test_cout test_cin test_reallocate test_swap test_nextBlank test_nextNonBlank test_justify

