#include<iostream>

#define size 10

using namespace std;

class dequeue
{
	public:
	int a[size],front,rear,count,i;
	dequeue();
	void display();
	int is_empty();
	int is_full();
	void insfront(int);
	void insend(int);
	void delfront();
	void delend();	
};

dequeue::dequeue()
{
	rear=-1;
	front=-1;
	count=0;
}

void dequeue::display()
{
	if(is_empty())
	{
		cout<<"Empty !!! "<<endl;
	}
	else
	{
	cout<<"Dequeue is : ";
	for(i=front;i<=rear;i++)
	{
		cout<<"[";
		cout<<a[i]<<" ";
		cout<<"]";
	}
	}
}
	
	int dequeue::is_empty()
	{
		if(front==-1)
		return 1;
		else
		return 0;
	}
	
	int dequeue::is_full()
	{
		if(count>=size)
		return 1;
		else
		return 0;
	}
	
	void dequeue::insfront(int value)
	{
		if(is_empty())
		{
			front++;
			rear++;
			a[rear]=value;
			count++;
		}
		else if(is_full())
		{
			cout<<"Overflow !!! "<<endl;
		}
		else
		{
			for(i=count;i>=0;i--)
			{
				a[i]=a[i-1];
				
			}
			a[0]=value;
			count++;
			rear++;
		}
	}
	
	void dequeue::insend(int value)
	{
		if(is_empty())
		{
			front++;
			rear++;
			a[rear]=value;
			count++;
		}
		else if(is_full())
		{
			cout<<"Overflow !!! "<<endl;
		}
		else
		{
			a[++rear]=value;
			count++;
		}
	}
	
	void dequeue::delfront()
	{
		if(is_empty())
		{
			cout<<"Cannot delete elements"<<endl;
		}
		else
		{
			if(front==rear)
			{
				front=rear=-1;
				return;
			}
			cout<<a[front]<<" deleted ."<<endl;
			front=front+1;
		}
	}
	
	void dequeue::delend()
	{
		if(is_empty())
		{
			cout<<"Cannot delete elements"<<endl;
		}
		else
		{
			if(front==rear)
			{
				front=rear=-1;
				return;
			}
			cout<<a[rear]<<" deleted ."<<endl;
			rear=rear-1;
		}
	}
	
	int main()
	{
		int ch,value;
		dequeue d1;
		do
		{
		cout<<"\n***MENU***"<<endl;
		cout<<"1. Insert at beginning"<<endl;
		cout<<"2. Insert at end"<<endl;
		cout<<"3. Delete from front"<<endl;
		cout<<"4. Delete from rear"<<endl;
		cout<<"5. Display"<<endl;
		cout<<"6. Exit"<<endl;
		cout<<"Enter the option: "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter the element u want to insert :"<<endl;
				cin>>value;
				d1.insfront(value);
				break;
			case 2:
				cout<<"Enter the element u want to insert :"<<endl;
				cin>>value;
				d1.insend(value);
				break;
			case 3:
				d1.delfront();
				break;
			case 4:
				d1.delend();
				break;
			case 5:
				d1.display();
				break;
			default:
				cout<<"Invalid Choice !!! "<<endl;
				break;
	}
	}
	while(ch!=6);
}
	
	
