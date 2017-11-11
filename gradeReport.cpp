#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>

//Function prototypes
void getStudentData(ifstream& infile, vector<studentType> &studentList);

void printGradeReports(ofstream& outfile, vector<studentType> studentList, double tuitionRate);

using namespace std;

int main()
{

  vector<studentType> studentList;
  
  double tuitionRate;
  
  ifstream infile;
  ofstream outfile;
  
  infile.open("inputFile.txt");
  
  if(!infile)
  {
    cerr << "Input file does not exist. " << endl;
    cerr << "Program Aborted. " << endl;
    return 1;
  }
  
  outfile.open("outputFile.txt");
  
  infile >> tuitionRate;
  
  getStudentData(infile, studentList);
  
  printGradeReports(outfile, studentList, tuitionRate);
  
  infile.close();
  outfile.close();
  
  return 0;
  
}
  
void getStudentData(ifstream& infile, vector<studentType> &studentList)
{
  //local variables
  string fName;               //variable to store first name
  string lName;               //variable to store last name
  int ID;                     //variable to store student ID
  int noOfCourses;            //variable to store number of courses
  char isPaid;                //variable to store Y/N (If the student has paid the courses)
  bool isTuitionPaid;         //variable to store true/false
  string cName;               //variable to store course name
  string cNo;                 //variable to store course number
  int credits;                //variable to store course credit hours
  char grade;                 //variable to store course grade
  int i;                      //loop control variable

  vector<courseType> courses; //vector of objects to store the course information
  
  courseType cTemp;
  studentType sTemp;
  
  while(infile)
  {
    infile >> lName >> ID >> isPaid;
    
    if(isPaid == 'Y'
       isTuitionPaid = true;
    else
       isTuitionPaid = false;
    
    infile >> noOfCourses;
    
    courses.clear();
       
    for(i = 0; i < noOfcourses; i++)
       {
         infile >> cName >> cNo >> credits >> grade;
         cTemp.setcourseInfo(cName, cNo, grade, credits);
         courses.push_back(cTemp);
       }
       
    sTemp.setInfo(fName, lName, ID, isTuitionPaid, courses);
       
    infile >> fName;

}

void printGradeReports(ofstream& outfile, vector<studentType> studentList, double tuitionRate)
{
  unsigned int count;
  
  for(count = 0; count < studentList.size(); count++)
  {
    studentList[count].print(outfile, tuitionRate);
  }
  
}
         
