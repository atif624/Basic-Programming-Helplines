//MalikAtifAziz-15i-0057
//Question14
#include <iostream>
using namespace std;
int main()
{	
	for(int i=0;i<2;i++)
	{

		for(int i=0;i<2;i++)
		{	
			cout<<"+";
			for(int i=0;i<3;i++)
			{
				cout<<"=";
			}
		}
		cout<<"+\n";
	
		for(int i=0;i<3;i++)
		{
			for(int i=1;i<10;i++)
			{	
				if(i==1 or i==5 or i==9)
				{
					cout<<"|";
				}
				else
				{
					cout<<" ";
				}
			}
			cout<<endl;
		}
	}
	for(int i=0;i<2;i++)
		{	
			cout<<"+";
			for(int i=0;i<3;i++)
			{
				cout<<"=";
			}
		}
		cout<<"+\n";
	return 0;
}
