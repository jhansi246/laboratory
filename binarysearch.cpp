//lower bound->binary search
#include<bits/stdc++.h>
using namespace std;
int drinker(int arr[],int T,int n)
{
	int left=0;
	int right =n-1;
	while(left<=right){
		int mid=(left+right)>>1;
		if(arr[mid]>=T){
			right=mid-1;
		}
		else{
			left=mid+1;
		}
	}
	return left;
}
int main(){
	int n=9;
	int arr[n]={1,2,3,4,4,4,5,6,8};
	//int index=lower_bound(arr,arr+n,T)-arr;
	//int index1=lower_bound(ve.begin(),ve.end(),T)-ve.beg();
	int pos=drinker(arr,4,n);
	cout<<pos;
	return 0;


}

	
