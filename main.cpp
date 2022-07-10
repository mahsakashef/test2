#include <iostream>
using namespace std;
int add(int,int);
int main()
{
	int a,b;
	cin>>a>>b;
	add(a,b);
	return 0;
	
}
int add(int a,int b)
{
	int c=a*b;
	cout<<c;
	return 0;
}