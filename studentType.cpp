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
  
    
