#include<iostream>
using namespace std;

class publication
{
protected:
string title;
float price;

public:
void get_info(string a,float b)
{
cout<<"Enter the tile of the publication: ";
cin>>title;
cout<<"Enter the price for distribution of the book: ";
cin>>price;
}

void display_info()
{
cout<<"\nThe title of the publication is: "<<title;
cout<<"\nThe price for distribution of the book: "<<price;
}
};

class book : public publication
{
public:
int pages;

void get_bookinfo()
{
cout<<"\n\nEnter the number of the pages: ";
cin>>pages;
}

void display_bookinfo()
{
cout<<"The number of pages in the book are: "<<pages;
}
};

class tape : public publication
{

public:
float playtime;
void get_tapeinfo()
{
cout<<"\n\nEnter the duration of the tape: ";
cin>>playtime;
}

void display_tapeinfo()
{
cout<<"The duration of the tape: "<<playtime;
}
};

int main()
{
int c;
book b1;
tape t1;
b1.get_info("Technical",30.0);
t1.get_info("Technical",30.0);
cout<<"Enter the operation to be performed: \n";
cout<<"\n1.Books \n2.Tapes \n3.Exit";
cout<<"\n\nEnter your choice: ";
cin>>c;
switch(c)
{
case 1:
b1.display_info();

try{
b1.get_bookinfo();
if(b1.pages>500){
throw (10);
}
b1.display_bookinfo();
}
catch(int y){
cout<<"\n=====You have exceeded the number of pages!====="<<endl;
b1.pages = 0;
cout<<"The pages have been restored to their default value "<<b1.pages<<endl;
}


case 2:
t1.display_info();
try{
t1.get_tapeinfo();
if(t1.playtime<0){
throw (10);
}
t1.display_tapeinfo();
}
catch(int y){
cout<<"\n=====Enter a valid duration for the tape!====="<<endl;
t1.playtime = 0;
cout<<"The duration has been restored to its default value "<<t1.playtime<<endl;
}

case 3:
cout<<"\n\nThank You!!";

break;
}
}