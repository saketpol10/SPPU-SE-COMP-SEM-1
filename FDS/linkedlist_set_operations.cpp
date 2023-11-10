#include<iostream>
using namespace std;
struct node
{
  int rollno;
  struct node *next;  
};

class info
{
  node *head1=NULL,*temp1=NULL,*head2=NULL,*temp2=NULL,*head=NULL,*temp=NULL,*h1=NULL,*head3=NULL,*temp3=NULL;
  int r,i,f,b,v,k;
 public:
    node *create();
    void append();
    void totalstudent();
    void vanilla();
    void butterscotch();
    void union1();
    void intersection();
    void none();
    void onlyvanilla();
    void onlybutter();
    void print();
};

node*  info::create()
{
node *p=new(struct node);
cout<<"Enter the Roll No of the Student: ";
cin>>r;
p->rollno=r;
p->next=NULL;
return p;
}

void info::vanilla()
{
    int v;
    cout<<"Enter the number of students who like Vanilla: ";
    cin>>v;
    head=NULL;
    for(i=0;i<v;i++)
    {
     append();
     head1=head;
    } 
    print();
    head=NULL;
}
void info::butterscotch()
{
    int b;
    cout<<"Enter the number of students who like Butterscotch: ";
    cin>>b;
    for(i=0;i<b;i++)
    {
    append();
    head2=head;
    }
    print();
     head=NULL;
}
void info::append()
{
        node *p=create();
        if(head==NULL)
        {
         head=p;
        }
        else
        {
         temp=head;
          while(temp->next!=NULL)
          {
           temp=temp->next;
          }
         temp->next=p;
}

}
void info::totalstudent()
{
    cout<<"Total number of students: "<<endl;
    cin>>k;
    head=NULL;
    for(i=0;i<k;i++)
    {
      append();
      h1=head;
    }
    print();
    head=NULL;
}
void info::print()
{
    temp=head;
    while(temp->next!=NULL)
    {
     cout<<temp->rollno;
     temp=temp->next;
    }
    cout<<temp->rollno;
}
void info::intersection()
{
    cout<<"Roll No of students who like both Vanilla and Butterscotch: "<<endl;
    temp1=head1;
    while(temp1!=NULL)
    {
     temp2=head2;
     while(temp2!=NULL)
     {
     if(temp1->rollno==temp2->rollno)
     {
      cout<<'\n'<<temp1->rollno;
     }
     temp2=temp2->next;
     }
     temp1=temp1->next;
    }
}

void info::onlyvanilla()
{
    cout<<"Roll No of students who like only Vanilla:"<<endl;
    temp1=head1;
    while(temp1!=NULL)
    {
     temp2=head2;
     f=0;
    while(temp2!=NULL)
    {
     if(temp1->rollno==temp2->rollno)
     {
     f=1;
     }
     temp2=temp2->next;
     }
    if(f==0)
     {
     cout<<"\n"<<temp1->rollno;
     }
     temp1=temp1->next;
    }
}
void info::onlybutter()
{
    cout<<"Roll No of students who like only Butterscotch: ";
    temp2=head2;
    while(temp2!=NULL)
    {
     temp1=head1;
     f=0;
     while(temp1!=NULL)
     {
      if(temp2->rollno==temp1->rollno)
     { 
      f=1;
     }
     temp1=temp1->next;
     }
      if(f==0)
     {
      cout<<"\n"<<temp2->rollno;
     }
    temp2=temp2->next;
    }
}

void info::union1()
{
	cout<<"Roll No of students who like Vanilla or Butterscotch: "<<endl;
	temp1=head1;
	while(temp1!=NULL)
	{
	node *p=new(struct node);
	p->rollno=temp1->rollno;
	p->next=NULL;
	if(head3==NULL)
	{
	head3=p;
	}
	else
	{
	temp3=head3;
	while(temp3->next!=NULL)
	{
	temp3=temp3->next;
	}
	temp3->next=p;
	}
	temp1=temp1->next;
	}
	temp2=head2;
	while(temp2!=NULL)
	{
	f=0;
	temp1=head1;
	while(temp1!=NULL)
	{
	if(temp2->rollno==temp1->rollno)
	{
	f=1;
	}
	temp1=temp1->next;
	}
	if(f==0)
	{
	node *p=new(struct node);
	
	p->rollno=temp2->rollno;
	p->next=NULL;
	if(head3==NULL)
	{
	head3=p;
	}
	else
	{
	temp3=head3;
	while(temp3->next!=NULL)
	{
	temp3=temp3->next;
	}
	temp3->next=p;
	}
	}
	temp2=temp2->next;
	}
	temp3=head3;
	while(temp3->next!=NULL)
	{
	cout<<"\n"<<temp3->rollno;
	temp3=temp3->next;
	}
	cout<<"\n"<<temp3->rollno;
}
void info::none()
{
	cout<<endl;	
	cout<<"Roll No of students who like neither Vanilla nor Butterscotch: "<<endl;
	temp=h1;
	while(temp!=NULL)
	{
	temp3=head3;
	f=0;
	while(temp3!=NULL)
	{
	if(temp->rollno==temp3->rollno)
	{
	f=1;
	}
	temp3=temp3->next;
	}
	if(f==0)
	{
	
	cout<<"\n"<<temp->rollno;
	}
	temp=temp->next;
	}
}

int main()
{
	 info i1;
	 int userchoice,exit1=1;
	 cout<<"Enter the total number of students"<<endl;
	 i1.totalstudent();
	
	 cout<<endl;
	 cout<<"Enter the Roll No of students who like Vanilla"<<endl;
	 i1.vanilla();
	
	 cout<<endl;
	 cout<<"Enter the Roll No of students who like Butterscotch"<<endl;
	 i1.butterscotch();

	do
	{
		cout<<endl;
	    cout<<"1. Display the Roll No of students who like Vanilla or Butterscotch"<<endl;
	    cout<<"2. Display the Roll No of students who like only Vanilla"<<endl;
	    cout<<"3. Display the Roll No of students who like only Butterscotch"<<endl;
	    cout<<"4. Display the Roll No of students who like both Vanilla and Butterscotch"<<endl;
	    cout<<"5. Display the Roll No of students who like neither Vanilla nor Butterscotch"<<endl;
	    cout<<"Enter the desired option: ";
	    cin>>userchoice;
	    switch(userchoice)
	   {
		    case 1:
		        i1.union1();
		    break;
		    case 2:
		        i1.onlyvanilla();
		    break;
		    case 3:
		        i1.onlybutter();
		    break;
		    case 4:
		        i1.intersection();
		    break;
		    case 5:
		        i1.none();
		    break;
		    case 6:
		        exit1=0;
		    break;
	  }
	}
	while(exit1);
	cout<<"\n";
	return 0;
}