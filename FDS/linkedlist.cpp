#include<iostream>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

class sll;
class node
{
int prn;
string name;
node*next;
node(int p, string nm)
{
prn=p;
name=nm;
next=NULL;
}
friend class sll;
};
class sll
{
node*head;
public:
sll()
{
head=NULL;
}
void create();
void display();
void insertatstart();
void insertbetween();
void insertatlast();
void computetotal();
void deletefirst();
void deleteend();
void deletebyvalue();
void concat(sll l2);
};
void sll :: create()
{
int prn;
string name;
if (head==NULL)
{
cout<<"\nEnter the PRN number of the student:";
cin>>prn;
cout<<"\nEnter the name of the student:";
cin>>name;
head=new node(prn,name);
}
else
{
cout<<"\nList is already created.";
}
}

void sll :: display()
{
node *temp;
temp = head;
if(head == NULL)
{
cout<<"\nList is empty:\n";
}
else
{
while(temp!=NULL)
{
cout<<"\nCreated List:=\n";
cout<<"\nPRN Number:"<<temp->prn;
cout<<"\nName of the student:"<<temp->name;
temp=temp->next;

}
}

}
void sll::insertatstart()
{
cout<<"\nEnter information for adding a node at the beginning of the list:";
int num;
string nme;
if(head==NULL)
{
cout<<"\nEmpty list:\n";
create();
}
else
{
cout<<"\n\nEnter the PRN number of the student:";
cin>>num;
cout<<"\nEnter the name of the student:";
cin>>nme;
node *temp = new node(num,nme);
temp->next=head;
head=temp;
}
cout<<"\nThe node is  inserted at the beginning.\n";
display();
}
void sll::insertatlast()
{
cout<<"\nEnter information for adding a node at the end of the list:";
node*temp=head;
int n;
string nm;
if(head==NULL)
{
create();
}
else
{
cout<<"\nEnter PRN number of the student:";
cin>>n;
cout<<"\nEnter the name of the student:";
cin>>nm;
node*sec=new node (n,nm);
while( temp->next!=NULL)
{
temp=temp->next;
}
temp->next=sec;
sec->next=NULL;
}
cout<<"\nNew node is inserted at last.";
display();
}

void sll::insertbetween()
{
cout<<"\nEnter information for adding a node between two existing nodes:";
int p,pr,flag=0;
string n;
node*temp;
temp=head;
cout<<"\nEnter the PRN number of the previous node:";
cin>>p;
if(head==NULL)
{
cout<<"\nThe List is Empty!";
create();
}
else
{
while(temp!=NULL)
{
if(temp->prn==p)
{
flag=1;
break;
}
temp=temp->next;
}
if (flag==1)
{
cout<<"\nEnter the PRN Number of the student:";
cin>>pr;
cout<<"\nEnter the Name of the student:";
cin>>n;
node*nextnode=new node (pr, n);
nextnode->next=temp->next;
temp->next=nextnode;
cout<<"\n\nThe Node is inserted after the input previous node position.";
}
}
display();
}

void sll::computetotal()
{
node*t;
int count=0;
t=head;
if(head==NULL)
{
cout<<"\nThe list is empty.";
}
else
{
while (t!=NULL)
{
count ++;
t=t->next;
}
cout<<"\n\nThe number of entries in the list:"<<count<<endl;
}
}
void sll::deletefirst()
{
cout<<"\nThis function deletes the President node:";
node*temp=head;
if(head==NULL)
{
cout<<"\nThe List is Empty!";
}
else
{
head=head->next;
delete temp;
}
cout<<"\nThe first node is deleted.";
display();
}
void sll::deleteend()
{
cout<<"\nThis function deletes the Secretary node:";
node*temp=head;
node*p;
if(head==NULL)
{
cout<<"\nThe List is Empty!";
}
else
{
while(temp->next!=NULL)
{
p=temp;
            temp=temp->next;
        }
        p->next=NULL;
        delete temp;
    }
    cout<<"\nThe last node is deleted.";
    display();
}
void sll::deletebyvalue()
{
cout<<"\nEnter information for deleting a node of your choice:";
    node *temp;
    node *p;
    int flag=0;
    int pos;
    if(head==NULL)
    {
        cout<<"\nList is Empty";
    }
    else
{
        cout<<"\nEnter the PRN number of the node to be deleted:";
        cin>>pos;
        temp=head;
        while(temp!=NULL)
        {
            if(temp->prn==pos)
          {
              flag=1;
              break;
          }
       p=temp;
       temp=temp->next;
        }
        if(flag==1)
        {
            p->next=temp->next;
            temp->next=NULL;
        }
     delete temp;
    }
    cout<<"\nThe node corresponding to the entered PRN number has been deleted.";
    display();
}
void sll::concat(sll l2)
{
cout<<"\nThis function concatenates two lists.";
node*t,*p;
t=l2.head;
if(t==NULL)
{
cout<<"\nThe second list is empty.";
return;
}
p=head;
while(p->next!=NULL)
{
p=p->next;
}

p->next=t;
l2.head=NULL;
cout<<"\nAfter concatenation list: \n";
display();
}
int main()
{
int choice;
sll l1,l2,l3;
cout<<"\n\n     Welcome to The Pinnacle Club !" ;
int flag=1;
while(flag==1)
{
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n\nChoose the operation you want to perform:-";
cout<<"\n\n1.Create a list:\n2.Insert President:\n3.Insert Secretary:\n4.Insert after position (member):\n5.Display list:";
cout<<"\n6.Delete the President:\n7.Delete the Secretary:\n8.Delete a member:\n9.Find total number of members:\n10.Combine two lists:";
cout<<"\n11.Exit.\n\nEnter your choice:";
cin>>choice;

if(choice==1)
{
l1.create();
}
if(choice==2)
{
l1.insertatstart();
}
if(choice==3)
{
l1.insertatlast();
}
if(choice==4)
{
l1.insertbetween();
}
if(choice==5)
{
l1.display();
}
if(choice==6)
{
l1.deletefirst();
}
if(choice==7)
{
l1.deleteend();
}
if(choice==8)
{
l1.deletebyvalue();
}
if(choice==9)
{
l1.computetotal();
}
if(choice==10)
{
l2.create();
l1.concat(l2);
}
if(choice==11)
{
cout<<"\nThank You Visit Again! :)";
flag=0;
}
if(choice>=12)
{
cout<<"\nInvalid Input!";
}
}
}