//MalikAtifAziz-15i-0057
//Question11
#include <iostream>
using namespace std;
int main()
{
	cout<<"+";
	for(int i=0;i<6;i++)
	{
		cout<<"-";
	}
	cout<<"+\n";
	
	for(int i=0;i<2;i++)
	{
		int space=0;
		int space1=2;
		int space2=2;
		for(int i=0;i<3;i++)
		{

			cout<<"|";
		
			for(int i=0;i<space1;i++)
			{
				cout<<" ";
			}
			space1--;
			cout<<"^";
			for(int i=0;i<space;i++)
			{
				cout<<" ";
			}
			space=space+2;
			cout<<"^";
			for(int i=0;i<space2;i++)
			{
				cout<<" ";
			}
			space2--;
			cout<<"|";	
			cout<<endl;		
		}
	}
	cout<<"+";
		for(int i=0;i<6;i++)
		{
			cout<<"-";
		}
		cout<<"+\n";
	//SecondPart
	
	for(int i=0;i<2;i++)
	{
		int space=4;
		int space1=0;
		int space2=0;
		for(int i=0;i<3;i++)
		{

			cout<<"|";
		
			for(int i=0;i<space1;i++)
			{
				cout<<" ";
			}
			space1++;
			cout<<"v";
			for(int i=0;i<space;i++)
			{
				cout<<" ";
			}
			space=space-2;
			cout<<"v";
			for(int i=0;i<space2;i++)
			{
				cout<<" ";
			}
			space2++;
			cout<<"|";	
			cout<<endl;		
		}
	}
			cout<<"+";
		for(int i=0;i<6;i++)
		{
			cout<<"-";
		}
		cout<<"+\n";
	
}
