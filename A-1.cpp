#include<iostream>
using namespace std;
void factorial(int n)
{
	int s = 1;
	for(int i = 1; i<=n; i++)
	{
		s = s * i;
	}
	cout<<s;
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	factorial(n);
}
