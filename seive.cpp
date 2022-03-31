#include<bits/stdc++.h>
using namespace std;
long long N=1000001;
vector <bool>primes(N,true);
void Gen_seive(){
	primes[0]=primes[1]=false;
	for(int i=2;i*i<=N;i++)
	{
	if(primes[i]==true){
	for(int j=i*i;j<=N;j+=i)
	{
	   primes[j]=false;
	} 
	}
}
}
int main()
{
	
	Gen_seive();
	int l=2,r=9;
	for(int i=l;i<=r;i++){
		if(primes[i]==true){
			cout<<i<<" ";
		}
	}
	return 0;
}