//MalikAtifAziz-15i-0057
//Question17
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
char name1[100];
cout<<"Please enter first name? \n";
cin>>name1;
int age1;
cout<<"Please enter age in following format like if age is 14 yrs 10 months and 7 days enter it as 141007: \n";
cin>>age1;
char name2[100];
cout<<"Please enter second name \n";
cin>>name2;
int age2;
cout<<"Please enter age in following format like if age is 14 yrs 10 months and 7 days enter it as 141007: \n";
cin>>age2;
int year1=age1/10000;
int months1=(age1/100)-(year1*100);
int days1=age1%100;
cout<<name1<<"'s age is"<<days1<<"/"<<months1<<"/"<<year1<<endl;
int year2=age2/10000;
int months2=(age2/100)-(year2*100);
int days2=age2%100;
cout<<name2<<"'s age is"<<days2<<"/"<<months2<<"/"<<year2<<endl;
int yeargap=year2-year1;
int monthsgap=months2-months1;
int daysgap=days2-days1;
if(yeargap>0)
    {
    	cout<<name2<<" is older than"<<name1<<endl;	
	}
else if(yeargap<0)
    {
	 cout<<name1<<" is older than "<<name2<<endl;
	}
else if(yeargap==0)
    if (monthsgap>0)
        {
        	cout<<name2<<" is older than "<<name1<<endl;
		}
    else if(monthsgap<0)
         {
         	cout<<name1<<" is older than "<<name2<<endl;
		 }
    else if(monthsgap==0)
    {
        if(daysgap>0)
            cout<<name2<<" is older than "<<name1;
        else if(daysgap<0)
            cout<<name1<<" is older than "<<name2;
        else
            cout<<"both are of equal age\n";
}
    

}
