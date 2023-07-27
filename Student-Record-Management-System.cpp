//PROJECT: Student Record Management System using C++
//By Dhruve vishwskarma  
#include<iostream>
using namespace std;
string roll_no[30],name[30],lastname[30],Class[30],course[30],
 admission_year[30],mobile_no[30];
//needed variable string_type_array.
int total=0; //to store all data
void enter()
{
int ch=0;
cout<<" ⌨ Number of students do u want to enter  : ";
cin>>ch;

if(total==0)
{
total=ch+total;
for(int i=0;i<ch;i++)
{
cout<<"\n ✎ Enter the Data "<<i+1<<endl<<endl;
cout<<"⇲ Enter Roll NO : "; 
cin>>roll_no[i];
cout<<"⇲ Enter Name : ";
cin>>name[i];
cout<<"⇲ Enter Last Name : ";
cin>>lastname[i];
cout<<"⇲ Enter Class: ";
cin>>Class[i];
cout<<"⇲ Enter Course: ";
cin>>course[i];
cout<<"⇲ Enter Admission Year: ";
cin>>admission_year[i];
cout<<"⇲ Enter Mobile NO: ";
cin>>mobile_no[i];
cout<<"\n     { ☑ SAVED SUCCEFULLY ☑ }     "<<endl;
}
}
else 
{
//to not to storing double data()
for(int i=total;i<ch+total;i++) 
{
cout<<"\n ✎ Enter the Data "<<i+1<<endl<<endl;
cout<<"⇲ Enter Roll NO : "; 
cin>>roll_no[i];
cout<<"⇲ Enter Name : ";
cin>>name[i];
cout<<"⇲ Enter Last Name : ";
cin>>lastname[i];
cout<<"⇲ Enter Class: ";
cin>>Class[i];
cout<<"⇲ Enter Course: ";
cin>>course[i];
cout<<"⇲ Enter Admission Year: ";
cin>>admission_year[i];
cout<<"⇲ Enter Mobile NO: ";
cin>>mobile_no[i];
cout<<"\n     { ☑ SAVED SUCCEFULLY ☑ }     "<<endl;
}
total=ch+total;
}
}
void show()
{
if(total==0)
{
cout<<"  ✘ Data not found ☹ "<<endl;
}
else
{ 
for(int i=0;i<total;i++)
{
cout<<"\n ⌨ Data of Student : "<<i+1<<endl<<endl;
cout<<"➥Roll NO : "<<roll_no[i]<<endl;
cout<<"➥Name    : "<<name[i]<<" "<<lastname[i]<<endl;
cout<<"➥Class   : "<<Class[i]<<endl;
cout<<"➥Course  : "<<course[i]<<endl;
cout<<"➥Mobile  : "<<mobile_no[i]<<endl;
cout<<"➥Admission Year : "<<admission_year[i]<<endl;
}
}
}
void search()
{
if(total==0)
{
cout<<"  ✘ Data not found ☹ "<<endl; 
}
else
{
string rollno;
cout<<"⇲ Enter the roll No :"<<endl<<" ➭";
cin>>rollno;
for(int i=0;i<total;i++)
{
if(rollno==roll_no[i])
{
cout<<"\n ⌨ Data of Student : "<<i+1<<endl<<endl;
cout<<"➥Roll NO : "<<roll_no[i]<<endl;
cout<<"➥Name    : "<<name[i]<<" "<<lastname[i]<<endl;
cout<<"➥Class   : "<<Class[i]<<endl;
cout<<"➥Course  : "<<course[i]<<endl;
cout<<"➥Mobile  : "<<mobile_no[i]<<endl;
cout<<"➥Admission Year : "<<admission_year[i]<<endl;
}
} 
}
}

void update()
{
if(total==0)
{
cout<<"  ✘ Data not found ☹ "<<endl; 
}
else{
string rollno;
cout<<"⇲ Enter the roll to update"<<endl<<" ➭";
cin>>rollno;
for(int i=0;i<total;i++)
{
if(rollno==roll_no[i]) 
//Dhruve vishwakarma
{
cout<<"\n  〘 Previous Data 〙"<<endl<<endl;
cout<<"\n ⌨ Data of Student : "<<i+1<<endl<<endl;
cout<<"➥Roll NO : "<<roll_no[i]<<endl;
cout<<"➥Name    : "<<name[i]<<" "<<lastname[i]<<endl;
cout<<"➥Class   : "<<Class[i]<<endl;
cout<<"➥Course  : "<<course[i]<<endl;
cout<<"➥Mobile  : "<<mobile_no[i]<<endl;
cout<<"➥Admission Year : "<<admission_year[i]<<endl;

cout<<"\n⇲ Enter new data ☟ "<<endl<<endl;
cout<<"⇲ Enter Roll NO : "; 
cin>>roll_no[i];
cout<<"⇲ Enter Name : ";
cin>>name[i];
cout<<"⇲ Enter Last Name : ";
cin>>lastname[i];
cout<<"⇲ Enter Class: ";
cin>>Class[i];
cout<<"⇲ Enter Course: ";
cin>>course[i];
cout<<"⇲ Enter Admission Year: ";
cin>>admission_year[i];
cout<<"⇲ Enter Mobile NO: ";
cin>>mobile_no[i];
cout<<"\n     { ☑  SUCCEFULLY Updated ☑ }     "<<endl;
}
}
}
}
void Delete()
{
if(total==0)
{
cout<<"  ✘ Data not found ☹ "<<endl; 
}
else 
{
int a;
cout<<"≟ Are you Sure to Delete Data?"<<endl;
cout<<" Press 1 to delete all record"<<endl<<" ➭";
cin>>a;
if(a==1)
{
total=0;
cout<<"    ✔ All record is deleted..!!"<<endl;
}
else
{
cout<<"Please Press 1 to Delete All Record"<<endl;}
}
} 
int main() //main function, execution of program starts from here
{
int value;
while(true) //to always in Loop
{
cout<<"\n ❏ Press ☟ "<<endl<<endl;
cout<<"➭ ➊ To Enter data"<<endl;
cout<<"➭ ➋ To Show data"<<endl;
cout<<"➭ ➌ To Search data"<<endl;
cout<<"➭ ❹ To Update data"<<endl;
cout<<"➭ ❺ To Delete data"<<endl;
cout<<"➭ ❻ To Quit"<<endl<<endl;
cout<<"➭ ";
cin>>value;
switch(value)
{
case 1:
enter(); 
break;
case 2:
show();
break;
case 3:
search();
break;
case 4:
update();
break;
case 5:
Delete();
break;
case 6:
exit(0);
break; 
default:
cout<<"  ☹ Invalid input  "<<endl;
break;
}
}
} 
