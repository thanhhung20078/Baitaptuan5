#include<iostream>
using namespace std;
void passbyvalue(int n)
{
	int s = 2+n;
	cout<<s<<endl;
	cout<<"dia chi cua n la:"<<&n<<endl;
}
void passbyreference(int &x,int &n)
{
	int temp = x;
	x = n;
	n = temp;
	cout<<"dia chi theo tham chieu:"<<&x<<" "<<&n<<endl;
}
int main()
{
	int n;
	cout<<"nhap n:";cin>>n;
	passbyvalue(n); 
	cout<<"dia chi bien n la: "<<&n<<endl;
	int x;cin>>x;
	cout<<"dia chi cua x la: "<<&x<<endl;
	passbyreference(x,n);
}
// dia chi cua doi so va bien so la khac nhau trong ham main
