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


int main()
{
  const std::string TELLER_FILE_PATH = "data/tellers.dat";

  std::vector<std::string> tellerUsernames,
                           tellerPasswords;
  fillTellerArrays(tellerUsernames, tellerPasswords);
  
  return 0;
}