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
  




}
