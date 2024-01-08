//MULTIMAP---->its like a map but stores duplicates
#include<bits/stdc++.h>
using namespace std;
int main()
{
	multimap<int,int>mp;
	mp.insert({1,10});
	mp.insert({2,20});
	mp.insert({3,30});
	mp.insert({3,40});
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		cout<<it->first<<" "<<it->second<<" ";
	}
	mp.erase(3);
	cout<<endl;
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		cout<<it->first<<" "<<it->second<<" ";
	}

}
