#include<iostream>

using namespace std;

int n;
#define size 10
template<class T>
void sel(T A[size])
{
	int i,j,min;
	int temp;
	for (int i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[min])
			min=j;
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
	cout<<"Sorted array is : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<" "<<A[i];
			
	}
	cout<<endl;
}
int main()
{
	int A[size];
	float B[size];
	int i;
	cout<<"Enter total number of int elements : "<<endl;
	cin>>n;
	cout<<"Enter elements :"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	sel(A);
	cout<<"Enter total number of float elements : "<<endl;
	cin>>n;
	cout<<"Enter elements :"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>B[i];
	}
	sel(B);
}