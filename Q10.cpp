//MalikAtifAziz-15i-0057
//Question10
#include <iostream>
using namespace std;
int main()
{
	int i=6;
	int j=0;
	int k=12;
	int l=0;
	int m=0;
	int n=6;
	for (int w=0;w<7;w++)
	{
	
	for(int a=0;a<i;a++)
	{
		cout<<"*";
	}
	i=i-1;
	for(int b=0;b<j;b++)
	{
		cout<<" ";
	}
	j++;
	for(int c=0;c<k;c++)
	{
		cout<<"/";
	}
	k=k-2;
	for(int d=0;d<l;d++)
	{
		cout<<"\\";
	}
	l=l+2;
	for(int e=0;e<m;e++)
	{
		cout<<" ";
	}
	m++;
	for(int f=0;f<n;f++)
	{
		cout<<"*";
	}
	n--;
	cout<<endl;
	}
}
