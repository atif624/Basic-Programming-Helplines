//MalikAtifAziz-15i-0057
//Question12
#include <iostream>
using namespace std;
int main()
{
	cout<<"+";
	for(int i=0;i<9;i++)
	{
		cout<<"-";
	}
	cout<<"+\n";
	int space=4;
	int slash=0;
	int bslash=0;
	int space1=4;
	for(int i=0;i<4;i++)
	{
		cout<<"|";
		for(int i=0;i<space;i++)
		{
			cout<<" ";
		}
		space--;
		for(int i=0;i<slash;i++)
		{
			cout<<"/";
		}
		slash++;
		cout<<"*";
		for(int i=0;i<bslash;i++)
		{
			cout<<"\\";
		}
		bslash++;
		for(int i=0;i<space1;i++)
		{
			cout<<" ";
		}
		space1--;
		cout<<"|";
		cout<<endl;
		
	}
	//secondpart
	int spacer=1;
	int slashe=3;
	int bslashe=3;
	int space2=1;
	for(int i=0;i<4;i++)
	{
		cout<<"|";
		for(int i=0;i<spacer;i++)
		{
			cout<<" ";
		}
		spacer++;
		for(int i=0;i<bslashe;i++)
		{
			cout<<"\\";
		}
		bslashe--;
		cout<<"*";
		for(int i=0;i<slashe;i++)
		{
			cout<<"/";
		}
		slashe--;
		for(int i=0;i<space2;i++)
		{
			cout<<" ";
		}
		space2++;
		cout<<"|";
		cout<<endl;
		
	}
	cout<<"+";
	for(int i=0;i<9;i++)
	{
		cout<<"-";
	}
	cout<<"+";
	cout<<endl;
	//thirdpart
	int spacer1=1;
	int slashe1=3;
	int bslashe1=3;
	int space3=1;
	for(int i=0;i<4;i++)
	{
		cout<<"|";
		for(int i=0;i<spacer1;i++)
		{
			cout<<" ";
		}
		spacer1++;
		for(int i=0;i<bslashe1;i++)
		{
			cout<<"\\";
		}
		bslashe1--;
		cout<<"*";
		for(int i=0;i<slashe1;i++)
		{
			cout<<"/";
		}
		slashe1--;
		for(int i=0;i<space3;i++)
		{
			cout<<" ";
		}
		space3++;
		cout<<"|";
		cout<<endl;
		
	}
	//fourthpart
	int space0=4;
	int slash0=0;
	int bslash0=0;
	int space10=4;

	for(int i=0;i<4;i++)
	{
		cout<<"|";
		for(int i=0;i<space0;i++)
		{
			cout<<" ";
		}
		space0--;
		for(int i=0;i<slash0;i++)
		{
			cout<<"/";
		}
		slash0++;
		cout<<"*";
		for(int i=0;i<bslash0;i++)
		{
			cout<<"\\";
		}
		bslash0++;
		for(int i=0;i<space10;i++)
		{
			cout<<" ";
		}
		space10--;
		cout<<"|";
		cout<<endl;
		
	}
	cout<<"+";
	for(int i=0;i<9;i++)
	{
		cout<<"-";
	}
	cout<<"+";
	
	return 0;
}
