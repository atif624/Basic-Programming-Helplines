//MalikAtifAziz-15i-0057
//Question13
#include <iostream>
using namespace std;
int main()
{ 
	int i=0;
	int a=5;
	int num=1;
	int b=1;
	int j=0;
	int k=0;
	int c=5;
	int l=0;
	do{

		do {
			cout<<"-";
			i++;
		}
		while (i<a);
		a--;
		i=0;
	
		do {
			cout<<num;
			j++;
		}
		while(j<b);
		num=num+2;
		b=b+2;
		j=0;
		do {
			cout<<"-";
			k++;
		}
		while (k<c);
		c--;
		cout<<endl;
		k=0;
	l++;
	}
	while(l<5);
}
