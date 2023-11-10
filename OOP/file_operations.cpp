#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
	fstream fobj;
	
	fobj.open("file1.txt",ios::out); //ios::out means that open file for only writing
	
	char arr[150];
	cout<<"Enter the data:- ";
	cin.getline(arr,150); //getline used so that it accepts and reads inputs from multiple lines
	
	int length =strlen(arr);
	fobj.write(arr,length+1);
	
	fobj.close();
	char line[150];
	fobj.open("file1.txt",ios::in); //ios::in means that open file for only reading
	
	while(fobj){ //to read the contents of the file
	fobj.getline(line,length+1);
	cout<<line;
	
}
	fobj.close();


return 0;
}
