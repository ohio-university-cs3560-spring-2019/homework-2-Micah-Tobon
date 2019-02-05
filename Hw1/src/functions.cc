#include "../include/functions.h"
#include <string>
#include <iostream>

void find_replace(const string &target, const string &new_target){
  string temp;  // Create var for new string
  getline(cin, temp); // Take in the first string of the input file

  while(!cin.eof()){  // Reading through the original string
    size_t x = 0; // Initiate the position
    x = temp.find(target, x); // Finding the phrase in original string

    while(x != string::npos){
      temp.replace(x, target.length(), new_target); // Replacing the phrase in new string
      x = temp.find(target, x); // Finding the next phrase in the original string if another one occurs
    }

    cout << temp << endl; // Outputting the new string sequence into a separate file
    getline(cin, temp); // Receiving the next line from the input file
  }
}
