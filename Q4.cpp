//MalikAtifAziz-15i0057
//Question4
#include <iostream>
using namespace std;
int main()
{
	int s0,v0,a,t;
	cout<<"Enter value of s0\n";
	cin>>s0;
	cout<<"Enter value of v0\n";
	cin>>v0;
	cout<<"Enter value of a\n";
	cin>>a;
	cout<<"Enter value of t\n";
	cin>>t;
	int i=v0*t;
	float j=0.5*a*t*t;
	float ans=s0+i+j;
	cout<<"position s is "<<ans<<endl;
	
	return 0;
}
