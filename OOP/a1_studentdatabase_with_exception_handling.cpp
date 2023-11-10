# include<iostream>
using namespace std;
class student
{
string name,clss,division,DOB,BG,address;
int rollno;
long int teleno,license;
static int count;

public:
student();
student(string name1,string cls,string div,string dob,string bg,string location,int no,long num,long mob);
student(student &s);
void display();
inline void showcls();
friend void showdiv(student s);
static void printcount();
void getdata();
~student()
{
cout<<"\n\n=====Object Destructed=====";
}

};

int student::count;

void student::printcount()
{
cout<<"\n\nTotal Objects Created = "<<count;
}

void showdiv(student s)
{
cout<<"\n\nData of students\n";
cout<<"Division: "<<s.division;
}

void student::display()
{
cout<<"\nName : "<<this->name;
cout<<"\nRoll No. : "<<this->rollno;
cout<<"\nClass : "<<this->clss;
cout<<"\nDivision : "<<this->division;
cout<<"\nDate of Birth: "<<this->DOB;
cout<<"\nBlood Group : "<<this->BG;
cout<<"\nAddress : "<<this->address;
cout<<"\nTelephone Number : "<<this->teleno;
cout<<"\nLicense Number : "<<this->license;
}

student::student()
{
name = "Tejas";
clss = "SE";
division = "II";
DOB = "15-06-2003";
BG = "AB+";
address = "Pune";
rollno = 53;
license = 3256;
teleno = 7894561230;
count = count+1;
}

student::student(string name1,string cls,string div,string dob,string bg,string location,int no,long num,long mob)
{
name = name1;
clss = cls;
division = div;
DOB = dob;
BG = bg;
address = location;
if (no<0 or no>75){
throw no;
}
rollno = no;
license = num;
teleno = mob;
count = count+1;
}

student::student(student &s)
{
name = s.name;
clss = s.clss;
division = s.division;
DOB = s.DOB;
BG = s.BG;
address = s.address;
rollno = s.rollno;
license = s.license;
teleno = s.teleno;
count = count+1;
}

inline void student :: showcls()
{
cout<<"This is the data of SE Computer Batch 2025 students\n";
}

void student::getdata()
{
cout<<"\n Enter Name : ";
cin>>name;
cout<<"Enter Class : ";
cin>>clss;
cout<<"Enter Division : ";
cin>>division;
cout<<"Enter Date Of Birth : ";
cin>>DOB;
cout<<"Enter Your Blood Group : ";
cin>>BG;
cout<<"Enter Address : ";
cin>>address;
cout<<"Enter Roll No. : ";
cin>>rollno;
if (rollno<0 or rollno>75){
throw rollno;
}
cout<<"Enter License Number : ";
cin>>license;
cout<<"Enter Telephone Number : ";
cin>>teleno;
}

int main()
{
student s1;
s1.showcls();
s1.display();

try
{
student s2("Om","SE","II","03-04-2003","B+","Nanded-City,Pune",80,1905,7448158105);
showdiv(s2);
s2.display();
}
catch (int no){
cout<<"\n=====Enter a valid roll number=====";
}


student s3(s1);
showdiv(s3);
s3.display();

student::printcount();
try{
student *s = new student();
s -> getdata();
cout<<"\n\nDisplaying data using New operator";
s -> display();
delete s;
}
catch (int no){
cout<<"\n=====Enter a valid roll number=====";
}

return 0;
}