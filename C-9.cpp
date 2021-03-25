#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int back(int n)
{
	int a;
	srand(time(0));
	return a = rand()%(n-0+1)+0;
}
int main()
{
	int n;
	cout<<"Nhap n bat ky: ";
	cin>>n;
	int a = back(n);
	cout<<a;
	return 0;
}
