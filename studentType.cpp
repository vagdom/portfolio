void studentType::setInfo(string fName, string lNmae, int ID,
                          bool isTPaid,
                          vector<courseType> courses)
{
  personType(fName, lName);        //set the name
  
  sId = ID;
  isTuitionPaid = isTPaid;
  numberOfCourses = courses.soze();
  
  coursesEnrolled = courses;
  
  //sort
    
