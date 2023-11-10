#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
int i;
int count=0;
int cline=0;
std::string line;

ifstream reader("myfile.txt");

if(!reader)
{
cout <<"Error opening input file"<<endl;
return -1;
}
while(1)
{
getline(reader,line);
if(reader.eof())
break;
else
{
if(line[0]!='a' and line[0]!='A')
{
cout<<line;
count=count+1;
}
}
}
cout<<"\n"<<"count="<<count;
reader.close();
return 0;
}