#include "student.h"

void student::setName(string first, string last)
{
  fName=first;
  lName=last;
}

string student::fullName()
{
  string full = "";

  for(int i=0;i<fName.length();i++)
  {
    full.append(1, fName.at(i)); 
  }

  full.append(1, ' '); 

  for(int i=0;i<lName.length();i++)
  {
    full.append(1, lName.at(i));  
  }
  
  return full;
  
}


        
