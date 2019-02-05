/**********************************************************************************
	This is the main file for homework 1 that takes in two strings when ran and
  searches a file for any instances of the first string and replaces this
  string with the second string and outputs it into a new file.

	CS 3560       Homework 1  
	Micah Tobon		Fall 2019		Ohio University
***********************************************************************************/
#include <iostream>
#include <cstring>
#include "../include/functions.h"
using namespace std;

int main(int argc, char **argv){
  string original_seq = argv[1]; // Place the first argument into a string sequence
  string new_seq = argv[2]; // Place the second argument into a string sequence

  find_replace(original_seq, new_seq); // Used to replace new string sequence with the original string sequence
  return 0;
}
