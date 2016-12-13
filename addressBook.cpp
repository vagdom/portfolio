#include <fstream>
#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <process.h>
#include <iomanip.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
void welcome_screen(); 
void welcome_screen() 
{ 
	clrscr(); 
	gotoxy(20,10); 
	cputs("**************** W E L C O M E *********************** "); 
	gotoxy(25,12); 
	cputs("*** C A M P I O N S C H O O L *** " ); 
	gotoxy(20,14); 
	textcolor(WHITE); 
	cputs(" T E L E P H O N E M A N A G E M E N T S O F T W A R E "); 
	gotoxy(38,16); textcolor(WHITE); cputs(" D O N E B Y : "); 
	gotoxy(50,18); 
	cputs(" Navi Arora "); 
	gotoxy(50,20); 
	cputs(""); 
	textcolor(WHITE+BLINK); 
	gotoxy(40,30); 
	cputs(" *** PRESS ANY KEY TO CONTINUE***"); 
	getch(); 
	return; 
} 
class directory 
{ 
	public: int record; 
		long pn1; char pn2[10]; 
		int age; 
		char address1[50]; 
		char address2[50]; 
		char occupation[20]; 
		char name[20]; 
		char emailadd[25]; 
		char internetadd[25]; 
		void modification(); 
		void addition(); 
		void deleate(); 
		void menu(); 
		void search(); 
		void view1(); 
		void init(); 
		void display(); 
		void view(); 
		char check(char *); 
		int test(); 
}obj; 

void directory::addition() //ADDING INFORMATION 
{ 
	ofstream fout; 
	fout.open("heera",ios::out|ios::app); 
	init(); 
	fout.write((char*)&obj,sizeof(obj)); 
	fout.close(); 
} 

int directory::test() //FIND NO. OF RECORDS 
{ 
	ifstream fin; fin.open("heera"); 
	fin.seekg(0,ios::end); 
	int n; 
	n=fin.tellg()/sizeof(obj); 
	cout< <" \n NUMBER OF RECORDS = "<>pn; int n; n=test(); 
	for(int i=0;i>pn1; cout< <" \n ENTER OFFICE PHONE NUMBER : "; 
	cin>>pn2; 
	// ch=cin.get(); 
	cin.get(ch); 
	cout< <" \n ENTER NAME : "; 
	cin.getline(name,20,'\n'); 
	cout<<" \n ENTER THE OCCUPATION : "; 
	cin.getline(occupation,20,'\n'); 
	cout<<" \n ENTER HOUSE ADDRESS : "; 
	cin.getline(address1,50,'\n'); 
	cout<<" \n ENTER OFFICE ADDRESS : "; 
	cin.getline(address2,50,'\n'); 
	cout<<" \n ENTER EMAIL ADDRESS : "; 
	cin.getline(emailadd,25,'\n'); 
	cout<<" \n ENTER INTERNET ADDRESS : "; 
	cin.getline(internetadd,25,'\n'); 
} 

void directory::view1() //TO DISPLAY ALL THE RECORDS 
{ 
cout<<"\n"; 
cout<<" PHONE NUMBER1 : "<>pn; 
ch=cin.get(); 
// cin.get(ch); 
for(i=0;i>pn1; 
ch=cin.get(); 
// cin.get(ch); 
} 
if(check("OFFICE PHONE NUMBER ")=='Y') 
{ cout< <"\n ENTER NEW PHONE NUMBER :"; 
cin>>pn2; ch=cin.get(); 
// cin.get(ch); 
} 
if(check("NAME")=='y') 
{ 
cout< <"\n ENTER NEW NAME : "; 
cin.getline(name,20,'\n'); 
} 
if(check("HOME ADDRESS")=='y') 
{ 
cout<<"\n ENTER NEW ADDRESS :"; 
cin.getline(address1,50,'\n'); 
} 
if(check("OFFICE ADDRESS")=='y') 
{ 
cout<<"\n ENTER NEW ADDRESS :"; 
cin.getline(address2,50,'\n'); 
} 
if(check("EMAIL ADDRESS:")=='y') 
{ 
cout<<"\n ENTER NEW MAIL ADDRESS :"; 
cin.getline(emailadd,25,'\n'); 
} 
if(check("INTERNET ADDRESS")=='y') 
{ 
cout<<"\n ENTER NEW INTERNET ADDRESS :"; 
cin.getline(internetadd,25,'\n'); 
} 
} 
fout.write((char*)&obj,sizeof(obj)); 
} 
fout.close(); 
fin.close(); 
} 


