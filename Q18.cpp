//MalikAtifAziz-15i-0057
//Question18
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main()
{
	int random;
	random=rand()%10+1;
	cout<<random;
	char a[10];
	cout<<"do you want to play game?\n";
	cin>>a;
	int num;
	while(a!="no")
{

	int count=0;
	int i=3;
	while(count!=3)
	{
		cout<<"enter a number\n";
		cin>>num;	
	if(num==random)
	{
		cout<<"you won the game\n";
		count=3;
	}
	else
	{
		cout<<"wrong entry\n"<<i-1<<" tries left\n";
		count++;
		i--;
	}
	}
}
}
