
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
typedef map<string,int> mapType;


mapType populationMap;

populationMap.insert(pair<string, int>("Maharashtra", 7026357));
populationMap.insert(pair<string, int>("Rajasthan", 6578936));
populationMap.insert(pair<string, int>("Karanataka", 6678993));
populationMap.insert(pair<string, int>("Punjab", 5789032));
populationMap.insert(pair<string, int>("West Bengal", 6676291));

map<string,int>::iterator iter;
cout << "Total state and UT of India with Size of populationMap: " << populationMap.size() << '\n';
for (iter = populationMap.begin(); iter != populationMap.end(); iter++)
{
cout << iter->first <<":" << iter->second << " million\n";
}
cout<<"\n Size of populationMap"<<populationMap.size()<<"\n";

string state_name;
cout<<"\n Enter name of the state :";
cin>>state_name;
iter = populationMap.find(state_name);
if( iter!= populationMap.end() )
 cout<<state_name<<" 's population is "<<iter->second<<" Million"<<endl;
else
cout<<"Key is not in populationMap"<<"\n";
populationMap.clear();  //clear() function is used to remove all the elements from the map container and thus leaving it’s size 0.
}
