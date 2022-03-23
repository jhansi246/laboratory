#include<bits/stdc++.h>
using namespace std;
int main()
{/*adding elements*/
	/*vector<int>ve;
	ve.push_back(10);
	ve.push_back(20);
	ve.emplace_back(30);
	for(int i=0;i<ve.size();i++)
		cout<<ve[i];
	ve.pop_back();
	cout<<"\n";
	//insertion function
	/*ve.insert(ve.begin(),30);
	for(auto it:ve)
		cout<<it<<" "<<endl;
	//erase elements
	/*ve.erase(ve.begin());
	ve.erase(ve.begin()+1);*/
	//insert function
	//ve.insert(ve.begin(),30);
	//ve.insert(ve.begin()+1,2,10);
	//pair function
	/*pair<int,string> p;
	p.first=2;
	p.second="hai";
	cout<<p.second<<endl;*/
	//pairing
	/*vector<pair<int,int>>p;
	p.push_back({10,20});
	p.push_back({30,40});
	for(auto it:p){

		cout<<it.first<<" "<<it.second<<"\n";
	}*/
	vector<pair<int,pair<int,int>>>pp={{1,{0,4}},{2,{4,3}},{3,{5,8}},{4,{7,9}}};
	for(auto it:pp){
		cout<<it.first<<" ";
		cout<<it.first(second);
	}

	


	


}