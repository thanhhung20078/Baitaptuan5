#include<iostream>
#include<math.h>
using namespace std;
void rnd(double n)
{
	int x,y;
	x = ceil(n);
	y = floor(n);
	cout<<"Lam tron len ta co: "<<x<<endl;
	cout<<"Lam tron xuong ta co: "<<y<<endl;
}
void rnd2(double n)
{
	int x = (int)n;
	int y;
	if(n-x>=0.5)
	{
		y = x+1;
	}
		else
		{
			x = y;
		}
	
	cout<<"So da lam tron: "<<y<<endl;
}
int main()
{
	double n;
	cout<<"Nhap vao n: ";
	cin>>n;
	rnd(n);
	rnd2(n);
	return 0;
}
