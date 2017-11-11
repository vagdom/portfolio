void couseType::setCourseInfo(string cName, string cNO,
                              char grade, int credits)
{
  courseName = cName;
  courseNo = cNo;
  courseGrade = grade;
  courseCredits = credits;  
}

void courseType::print(bool isGrade)
{
  
  cout << left;
  cout << setw(08) << courseNo << "   ";
  cout << setw(15) << courseName;
  cout.unsetf(ios::left);
  cout << setw(03) << courseCredits << "       ";
  
  if(isGrade)
    cout << setw(04) << courseGrade << endl;
  else
    cout << setw(04) << "***" << endl;
}

void courseType::print(ofstream& outp, bool isGrade)
{
  outp << left;
  outp << setw(08) << courseNo << "   ";
  outp << setw(15) << courseName;
  outp.unsetf(ios::left);
  outp << setw(03) << courseCredits << "   ";
  
  if(isGrade)
    outp << setw(04) << courseGrade << endl;
  else
    outp << setw(04) << "***" << endl;
}

courseType::courseType(string cName, string cNo,
                       char grade, int credits)
{
  setCourseInfo(cName, cNo, grade, credits);
}

char courseType::getGrade()
{
  return courseGrade;
}

void courseType::getCourseNumber(string& cNo)
{
  cNo = courseNo;
}

bool courseType::operator ==(const courseType& right) const
{
  return courseNo == right.courseNo);
}

bool courseType::operator !=(const courseType& right) const
{
  return courseNo != right.courseNo);
}

bool courseType::operator <=(const courseType& right) const
{
  return courseNo <= right.courseNo);
}

bool courseType::operator <(const courseType& right) const
{
  return courseNo < right.courseNo);
}

bool courseType::operator >=(const courseType& right) const
{
  return courseNo >= right.courseNo);
}

bool courseType::operator >(const courseType& right) const
{
  return courseNo > right.courseNo);
}




