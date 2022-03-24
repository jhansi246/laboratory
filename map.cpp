#include<bits/stdc++.h>
using namespace std;
int main(){
	//map in cpp which contains keys and values
	map<int,int>mpp;
	int arr[10]={1,2,3,1,4,5,6,7,8,9};
	for(int i=0;i<=10;i++){
		mpp[arr[i]]++;
	}
	for (auto it:mpp){
		cout<<it.first<<" "<<it.second<<"\n";
	}
}