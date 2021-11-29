/*
Author       : Miles Regal, Anthony Garufi
Class        : CSI-140 : Intro to Programming
Assignment   : Final Project
Date Assigned: 11/08/21
Due Date     : 12/06/21

Description:
             A banking system for tellers.

Certification of Authenticity:

I certify that this is entirely my own work, except where I have given
fully-documented references to the work of others. I understand the
definition and consequences of plagiarism and acknowledge that the assessor
of this assignment may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of
academic staff; and/or
- Communicate a copy of this assignment to a plagiarism checking
service (which may then retain a copy of this assignment on its
database for the purpose of future plagiarism checking)

*/
#pragma once

#include <iostream>
#include <iomanip> // setw(), precision()
#include <vector>
#include <sstream>
#include <fstream>
#include <regex> // "regex" object,


/***   Author: Miles Regal
   *  Purpose:  print a list of strings to stdout, with each element in the vector given as their own line-seperated list item,
   *            with the first list item number equal to argument start, for adding to an already-made list of text
   *      Pre:  1. a vector array containing the string list items to be printed
   *            2. the first list item number
   *     Post:  N/A
   *************************************************************************/
void printOrderedList(std::vector<std::string> list, int start = 1);

/***   Author: Miles Regal
   *  Purpose:  fills the 2 vector array reference arguments (will always pass the arrays) with data from tellers.dat, so we only have to read from that file once
   *            with the first list item number equal to argument start, for adding to an already-made list of text
   *      Pre:  1. reference to vector array that we will fill with usernames from the file
   *            2. reference to vector array that we will fill with passwords from the file
   *     Post:  N/A
   *************************************************************************/
void fillTellerArrays(std::vector<std::string> &tellerUsernames, std::vector<std::string> &tellerPasswords);