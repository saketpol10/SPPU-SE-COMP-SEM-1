#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class item
{
public:
int item_code;
string name;
char item_cost[6];
int item_quantity;

bool operator==(const item &item1)
{
return(item_code==item1.item_code);
}
bool operator<(const item &item1)
{
return(item_code<item1.item_code);
}
friend ostream& operator << (ostream &out, const item &);
friend istream& operator >> (istream &in, item &k);
};

ostream & operator << (ostream &out, const item &k)
{
out<<"\n\t\t"<<k.item_code<<"\t\t\t"<<k.name<<"\t\t"<<k.item_cost<<"\t\t"<<k.item_quantity;
return out;
}
istream & operator >> (istream &in , item &k)
{
cout<<"\nEnter the Item Code: ";
in>>k.item_code;
cout<<"\nEnter the Items name : ";
in>>k.name;
cout<<"\nEnter the Item's cost : ";
in>>k.item_cost;
cout<<"\nEnter the quantity of items required:";
in>>k.item_quantity;
return in;
}

bool myfunc(const item &k, const item &i2)
{ return(k.item_code<i2.item_code); }

vector<item> read()
{
int n;
item k;
vector<item> j;
cout<< "\nEnter total no. of Items : ";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>k;
j.push_back(k);
}
return j;
}

void printfunction(const item &k)
{ cout<<k; }

void print( const vector<item> &j)
{
cout<<"\n\t\tITEM CODE\t\tNAME\t\tCOST\t\tITEM QUANTITY";
for_each(j.begin(),j.end(),printfunction);
}

void insert(vector<item> &j)
{
item k;
cin>>k;
j.push_back(k);
}

void delet(vector<item>&j)
{
item k;
cout<<"\nEnter the code of the item to be deleted : ";
cin>>k.item_code;
vector<item>::iterator p;
p=find(j.begin(),j.end(),k);
if(p!=j.end())
j.erase(p);
else
cout<<"\nNot found ";
}

void search( vector<item>&j )
{
item k;
cout<<"\nEnter item code To Search : ";
cin>>k.item_code;
cout<<"\n\n\t\tITEM CODE\t\tNAME\t\tCOST";
vector<item>::iterator p;
p=find(j.begin(),j.end(),k);
if(p!=j.end())
cout<<*p;
else
cout<<"\nNot found ";
}

void sort( vector<item> &j)
{ sort(j.begin(),j.end(),myfunc); }

int main()
{
vector<item> j;
int op;
do
{
cout<<"\n\n\t\t-------<< MENU >>---------";
cout<<"\n\t\t1.Create ";
cout<<"\n\t\t2.Display ";
cout<<"\n\t\t3.Insert ";
cout<<"\n\t\t4.Delete ";
cout<<"\n\t\t5.Search ";
cout<<"\n\t\t6.Sort";
cout<<"\n\t\t7.Quit";
cout<<"\n\t\t--------------------------";
cout<<"\n\t\tEnter your choice : ";
cin >> op;

switch(op)
{
case 1:
j=read();
break;
case 2:
print(j);
break;
case 3:
insert(j);
break;
case 4:
delet(j);
break;
case 5:
search(j);
break;
case 6:
sort(j);
print(j);
break;
case 7:
cout<<"\n######Thanks######";
exit(0);
}

}
while(op!=8);

}