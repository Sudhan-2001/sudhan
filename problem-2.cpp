#include<iostream.h>
using namespace std;
int main()
{
	int a,b;
	int output=1;
	cout<<"\n enter a value =";
	cin>>a;
	b=a%2;
	if(b=0)
	{
		a=a-1;
	}
	for (int i;i<a;i++)
	{
		cout<< output;
		output=output+2;
	}
	return 0;
}