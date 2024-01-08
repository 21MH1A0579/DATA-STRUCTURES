//ordered map
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int>mp;
	mp.insert({1,10});
	mp.insert({2,20});
	for(int i=3;i<10;i++)
	{
		mp.insert({i,i*10});
	}
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		cout<<it->first<<" "<<it->second<<" ";
	}
	cout<<endl;
	mp.erase(mp.begin());
	mp.erase(2);
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		cout<<it->first<<" "<<it->second<<" ";
	}
	cout<<endl;
	cout<<mp.size()<<endl;
	cout<<mp.empty()<<endl;
	mp.clear();
	cout<<mp.empty();





}