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
#include "bankmate.hpp"

/***   Author: Miles Regal
   *  Purpose:  print a list of strings to stdout, with each element in the array given as their own line-seperated list item,
   *            with the first list item number equal to argument start, for adding to an already-made list of text
   *      Pre:  1. a c-style array containing the string list items to be printed
   *            2. the first list item number
   *     Post:  N/A
   *************************************************************************/
void printOrderedList(std::vector<std::string> list, int start)
{
  for (int i = 0; i < list.size(); i++)
    std::cout << start + i << ". " << list[i] << std::endl;
}

void fillTellerArrays(std::vector<std::string> &tellerUsernames, std::vector<std::string> &tellerPasswords)
{
  std::string tellerUsername,
              tellerPassword;
  std::ifstream tellerInfile("data/tellers.dat");
  for (int i = 0; !tellerInfile.eof(); i++)
  {
    tellerInfile >> tellerUsername >> tellerPassword;
    bool state = (bool) tellerInfile;
    if(!state) { std::cout << i; break;}
    tellerUsernames.push_back(tellerUsername);
    tellerPasswords.push_back(tellerPassword);
  }
}