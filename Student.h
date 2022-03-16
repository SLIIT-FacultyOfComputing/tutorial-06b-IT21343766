#include <cstring>
//#include <string>

class Student {
  // private section
  private :
  //    int studentId
    int studentID ;
  //    name <- 20 charcters
    char name[20] ;

  // public section
  public :
  //    assignDetails() method declaration
    void assignDetails (int sID , char tname[]) ;
  //    display() method declaration
    void display (void) ;
};
