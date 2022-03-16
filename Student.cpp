#include "Student.h"
#include <iostream>
//#include <string>
#include <cstring>

using namespace std;

//Assign studentId and name
void Student::assignDetails(int sID , char tname[]) {
  studentID = sID ;
  strcpy(name , tname) ;
}

// Display StudentId and Name
void Student::display() {
  cout << "----------------------------" << endl
    << "Student ID \t: " << studentID << endl 
    << "Student name \t: " << name << endl  ;
}
