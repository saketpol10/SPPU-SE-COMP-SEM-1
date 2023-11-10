#include<iostream>
using namespace std;

class complex
{
public:
float real,imag;
complex()
{
real=0;
imag=0;
}
complex operator + (complex);//declared operator function
friend complex operator * (complex a, complex b);
friend istream & operator >> (istream & , complex &);
friend ostream & operator << (ostream &, complex &);

};
complex operator * (complex a, complex c)
{
complex temp;
temp.real=a.real*c.real;
temp.imag=a.imag*c.imag;
return temp;
}

complex complex::operator + (complex c)
{
complex temp;
temp.real=real + c.real;
temp.imag=imag +c.imag;
return temp;
}




istream & operator >> (istream &in , complex &c)
{
cout<<"Enter real number"<<endl;
in>>c.real;
cout<<"Enter the imaginary number"<<endl;
in>>c.imag;
return in;
}



ostream & operator << (ostream &out , complex &c)
{
out<<"\n"<<c.real<<"+"<<c.imag<<"i";
return out;
}



int main()
{
int e;
char charact;
complex a,b,c;
cout<<"Enter the first complex number"<<endl;
cin>>a;
cout<<"Enter the second complex number"<<endl;
cin>>b;
cout<<a<<endl;
cout<<b<<endl;
do
{
cout<<"------User Menu--------"<<endl;
cout<<"1. Add"<<endl;
cout<<"2. Multiply"<<endl;
cout<<"Enter your choice :"<<endl;
cin>>e;
switch(e)
{ case 1:
c=a+b;
cout<<"Sum is :"<<c<<endl;
break;
case 2:
c=a*b;
cout<<"Product is:"<<c<<endl;
break;
}
cout<<"Do you want to continue?"<<endl;
cin>>charact;
}
while(charact='y');


}
