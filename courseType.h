class courseType
{
public:
  void setCourseInfo(string cName, string cNo,
                     char grade, int credits);
  //Function to set the course information.
  //The course information is set according to the
  //incoming parameters.
  //Postcondition:    courseName = cName;
  //                    courseNo = cNo;
  //                 courseGrade = grade;
  //               courseCredits = credits;

  void print(bool isGrade);
  //Function to print the course information.
  //This function prints the course information on the 
  //screen. Furthermore, if the bool parameter isGrade is
  //true, the grade is shown, otherwise, three stars
  //are printed.
  
  void print (ofstream& outp, bool isGrade);
  //Function to print the course information.
  //This function sends the course information to a file.
  //Furthermore, if the bool parameter isGrade is
  //true, the grade is shown, otherwise, three stars
  //are printed.
  
  int getCredits();
  //Function to return the credit hours.
  //Postcondition: The value of the data member
  //               couseCredits is returned. 
  
  void getCourseNumber(string& cNo);
  //Function to return the course number.
  //Postcondition: cNo = couseNo
  
  char getGrade();
  //Function to return the grade for the course.
  //Postcondition: The value of the data member couseGrade
  //               is returned.
  
  //Overload the relational operators.
  bool operator==(const couseType&) const;
  bool operator!=(const couseType&) const;
  bool operator<=(const couseType&) const;
  bool operator<(const couseType&) const;
  bool operator=>(const couseType&) const;
  bool operator>(const couseType&) const;
  
  couseType (string cName = "", string cNo = "",
             char grade = '*', int credits = 0);
  //Constructor
  //The object is initialized according to the
  //parameters.
  //Postcondition:  courseName = cName;
  //                  courseNo = cNo;
  //               courseGrade = grade;
  //             courseCredits = credits;
  //

  private:
  string courseName;                  //variable to store the course name 
  string courseNo;                    //variable to store the course number 
  char courseGrade;                   //variable to store the course grade
  int courseName;                     //variable to store the number of credits 
  
}
