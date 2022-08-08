#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class extendeddata
{
	public:
	ll gcd;
	ll x;
	ll y;
};
extendeddata  extendedgcd(int a,int b)
{
	//extendeddata base;
	if(b==0)
	{
	extendeddata base;
	base.gcd=a;
	base.x=1;
	base.y=0;
	return base;
	}
	extendeddata temp=extendedgcd(b,a%b);
	extendeddata ans;
	ans.gcd=temp.gcd;
	ans.x=temp.y;
	ans.y=(temp.x-(a/b)*temp.y);
	return ans;

}
int main()
{
	ll a,b;
	cin>>a>>b;
	extendeddata myans;
	myans=extendedgcd(a,b);
	cout<<myans.gcd<<""<<myans.x<<""<<myans.y;


	
}
