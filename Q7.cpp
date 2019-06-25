//MalikAtifAziz-15i-0057
//Question7
#include <iostream>
using namespace std;
int main()
{	int a=1;
	int k=4;
	int q=1;
	int y=0;
	while(y<5)
	{
		int j=k;
		while(j>=0)
		{
			cout<<" ";
			j--;	
		}
		int l=0;
		while(l<q)
		{
			cout<<a;
			l++;
		}
		cout<<"\n";
		q++;
		k--;
		a++;
		y++;	
	}
}
