void studentType::setInfo(string fName, string lNmae, int ID,
                          bool isTPaid,
                          vector<courseType> courses)
{
  personType(fName, lName);             //set the name
  
  sId = ID;                             //set the student ID
  isTuitionPaid = isTPaid;              //set isTuition 
  numberOfCourses = courses.soze();     //set the number of courses
  
  coursesEnrolled = courses;            //set the vector courses enrolled
  
  //sort the array coursesEnrolled
  sort(coursesEnrolled.begin(), coursesEnrolled.end());
}

studentType::studentType()
{
  numberOfCourses = 0;
  sId = 0;
  isTyuitionPaid = false;
}

void studentType::print(double tuitionRate)
{
  int i;
  
  cout << "Student Name: ";
  personType::print();
  cout << endl;
  
  cout <<"Number of courses enrolled: " << numberOfCourses << endl;
  cout << endl;
  
  cout << left;
  cout << "Course No" << setw(15) << "  Course Name" << setw(08) << "Credits" << setw(06) << "Grade" << endl;
  
  cout.unsetf(ios::left);
  
  for(i = 0; i < numberOfCourses; i++)
    coursesEnrolled[i].print(isTuitionPaid);
  cout << endl;
  
  cout << "Total number of credit hours: " << getHoursEnrolled() << endl;
  
  cout << fixed << showpoint << setprecision(2);
  
  if(isTuitionPaid)
    cout << "midsemester GPA: " << getGpa() << endl;
  else
  {
    cout << "*** Grades are being held for not paying the tuition. ***" << endl;
    cout << "Amount Due: $" << billingAmount(tuitionRate) << endl;
  }
  
  cout << "_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << endl;
}
  
void studentType::print(ofstream& outp, double tuitionRate)
{
  int i;
  string first;
  string last;
  
  personType::getName(first, last);
  
  outp << "Student Name: " << first << " " << last << endl;
  
  outp << "Student ID: " << sId << endl;
    
  outp <<"Number of courses enrolled: " << numberOfCourses << endl;
  outp << endl;
  
  outp << left;
  outp << "Course No" << setw(15) << "  Course Name" << setw(08) << "Credits" << setw(06) << "Grade" << endl;
  
  outp.unsetf(ios::left);
  
  for(i = 0; i < numberOfCourses; i++)
    coursesEnrolled[i].print(outp, isTuitionPaid);
  outp << endl;
  
  outp << "Total number of credit hours: " << getHoursEnrolled() << endl;
  
  outp << fixed << showpoint << setprecision(2);
  
  if(isTuitionPaid)
    outp << "midsemester GPA: " << getGpa() << endl;
  else
  {
    outp << "*** Grades are being held for not paying the tuition. ***" << endl;
    outp << "Amount Due: $" << billingAmount(tuitionRate) << endl;
  }
  
  outp << "_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << endl;
}    

int studentType::getHoursEnrolled()
{
  int totalCredits = 0;
  int i;
  
  for(i = 0; i < numberOfCourses; i++)
    totalCredits += coursesEnrolled[i].getCredits();
  
  return totalCredits;
}

double studentType::billingAmount(double tuitionRate)
{
  return tuitionRate * getHoursenrolled();
}

double studentType::getGpa()
{
  int i;
  double sum = 0.0;
  
  for(i = 0; o < numberOfCourses[i].getGrade(); i++)
  {
    switch(coursesEnrolled[i].getGrade())
    {
      case 'A': sum += coursesEnrolled[i].getCredits * 4;
                break;
      case 'B': sum += coursesEnrolled[i].getCredits * 3;
                break;  
      case 'C': sum += coursesEnrolled[i].getCredits * 2;
                break;  
      case 'D': sum += coursesEnrolled[i].getCredits * 1;
                break;  
      case 'F': sum += coursesEnrolled[i].getCredits * 0;
                break;
      default:  cout << "Invalid Course Grade" << endl;
    }
  }  
  
  return sum / getHoursEnrolled();
}  
        
        
  
