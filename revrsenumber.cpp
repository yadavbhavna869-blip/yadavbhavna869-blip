#include<iostream>
using namespace std;
int main()
{
	int i,r;
	cout<<"\n enter the number:";
	cin>>i;
	while(i>0)
	
{
	r=i%10;
	cout<<""<<r;
	i=i/10;

}
	return 0;
}
