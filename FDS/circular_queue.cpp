#include <iostream>
using namespace std;
int choice;
int val;
int queue[10];
int front=-1;
int rear=-1;
int flag=1;
void insert()
{
if(front==-1 && rear==-1)
{
front=0;
rear=(rear+1)%10;
cout<<"---MENU---"<<endl;
cout<<"Enter 1 for paneer pizza: "<<endl;
cout<<"Enter 2 for chicken pizza: "<<endl;
cout<<"Enter 3 for plain cheese pizza: "<<endl;
cout<<"Enter your choice: "<<endl;
if(front!=(rear+1)%10)
{
cin>>val;
queue[rear]=val;
}
}
}
void display()
{
for(int i=front;i<=rear;i++)
{
if(queue[i]==1)
cout<<"Paneer Pizza!! "<<"Order number "<<queue[i]<<endl;
else if(queue[i]==2)
cout<<"Chicken Pizza!! "<<"Order number "<<queue[i]<<endl;
else if(queue[i]==3)
cout<<"Plain Cheese Pizza!! "<<"Order number "<<queue[i]<<endl;
}
if(front==-1 && rear==-1)
cout<<"Sorry we are closed!! "<<endl;


}
void del()
{
front=(front+1)%10;
if(front==rear)
{
front=-1;
rear=-1;
}

}
int main()
{
while(flag==1)
{


cout<<"Enter 1 to place order: "<<endl;
cout<<"Enter 2 to delete placed order: "<<endl;
cout<<"Enter 3 to display placed order: "<<endl;
cout<<"Enter 4 to exit the menu: "<<endl;
cout<<"Enter your choice: "<<endl;
cin>>choice;
switch(choice)
{
case 1:
insert();
break;
case 2:
del();
break;
case 3:
display();
break;
case 4:
cout<<"Thank you for using!!"<<endl;
flag=0;
break;
default:
cout<<"Please enter valid choice!!!"<<endl;
}
}
}
