#include<iostream>
using namespace std;
int main()
{
	int  fact=0;
	cout<<"\n enter the number:";
	for( int i=1;i<5;++i)
	{
		fact=fact+i;//  1+1=2,2+2=4,4+3=7, 0+1=1, 1+2=3
		
	cout<<"\n factorial is\t:"<<fact;
	}
	
	
	return 0;
}

