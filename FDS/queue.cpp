#include<iostream>

#define size 5

using namespace std;

class queue
{
public:
int arr[5];
int front = -1,rear = -1;

void add_element()
{
	int value;
	if(rear == (size-1))
	cout<<"Queue is full !!! Insertion not possible ."<<endl;
	else
	{
	if(front=-1)
	front=0;
	cout<<"Enter the value to be added : "<<endl;
	cin>>value;	
	rear++;
	arr[rear] = value;
	}
}
	
void remove_element()
{
	if(front >= rear)
	{
		cout<<"Queue is empty !!! Deletion not possible . "<<endl;
	}
	else
	{
		cout<<"Following element is deleted :  "<<arr[front]<<endl;
		for(int i=front;i<=rear;i++)
		{
			arr[i]=arr[i+1];
		}
		rear--;	
	}
}

void display_queue()
{
	if (front>rear)
	{
		cout<<"Queue is empty !!! "<<endl;
	}
	else
	{
		cout<<"Queue elements are : "<<endl;
		cout<<"[";
		for(int i=front;i<=rear;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"]"<<endl;
	}
}

};

int main()
{
	queue q;
	int ch;
	char ch1;
	cout<<"------------------------------USER MENU--------------------------------"<<endl;
	cout<<"Enter '1' to insert element in Queue : "<<endl;
	cout<<"Enter '2' to remove element from Queue : "<<endl;
	cout<<"Enter '3' to display elements in Queue : "<<endl;
	do
	{
		cout<<"Enter your choice : "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				q.add_element();
				break;
			case 2:
				q.remove_element();
				break;
			case 3:
				q.display_queue();
				break;
			default:
				cout<<"Invalid Choice !!! "<<endl;
				break;
		}
		//cout<<"Enter n to exit or continue"<<endl;
	}
	while(ch1!='n');
}