//Header file studentType.h
#ifndef H_studentType
#define H_studentType
#include <fstream>
#include <string>
#include <vector>

#include "personType.h"
#include "courseType.h"

class studentType: public personType
{
public:
  void setInfo(string fname, string lName, int ID,
               bool isTPaid,
               vector<courseType> courses);
  //Function to set a student's information.
  //Postcondition: The data members are set according
  //               to the parameters.
  
  void print(double tuitionRate);
  //Function to print a student's grade report.
  
  void print(ofstream& out, double tuitionRate);
  //Function to print a student's grade report.
  //The output is stored in a file specified by the
  //parameter out.
  
  studentType();
  //Default constructor.
  //Postcondition: The data members are initialized to
  //               the default values.
  
  int getHoursEnrolled();
  //Function to return the credit hours in which a student
  //is enrolled.
  //Postcondition: The numbers of credit hours in which a
                   student is enrolled is calculated and
  //               returned.
  
  double getGpa();
  //Function to return the grade point average.
  //Postcondition: The GPA is calculated and returned.
  
  double billingAmount(double tuitionRate);
  //Function to return the tuition fees.
  //Postcondition: The tuition fees are calculated 
  //                and returned.
  
private:
  int sId;                              //variable to store the student ID
  int numberOfCourses;                  //variable to store the number of courses
  bool isTuitionPaid;                   //variable to indicate whether the tuition is paid.
  vector<courseType> coursesEnrolled;   //vector to store the courses
  
  };
#endif
