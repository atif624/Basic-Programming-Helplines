//MalikAtifAziz-15i-0057
//Question9
#include <iostream>
using namespace std;
int main()
{
	int i=0,j=0;
	while(j<6)
	{	i=0;
		while(i<9)
		{
			cout<<" ";
			i++;
		}
	cout<<"|";
	j++;
	}
	cout<<endl;
	int num=1;
	int k=0;
	while(k<6)
	{
		int b=0;
		num=1;
		while(b<=8)
		{
			cout<<num;
			num++;
			b++;
		}
		cout<<"0";
		k++;
	}
	
}
