personalInfoType::personalInfoType(string first, string last,
                                   int month, int day, int year, int ID)
                  : name(first, last), bDay(month, day, year)
{
     

}

void personalInfoType::setPersonalInfo(string first, string last,
                                       int month, int day,
                                       int year, int ID)
{
      name.setName(first, last);
      bDay.setDate(month, day, year);
      personID = ID;
}

void personalInfoType::printpersonalInfo() const
{
      name.print();
      cout << "s' date of birthday is ";
      bDay.printDate();
      cout << endl;
      cout << "and personal ID is " << personID;
}
