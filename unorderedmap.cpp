//unordered map
#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int,int>mp;
	mp.insert({1,10});//inserting an element
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
	mp.erase(mp.begin());//remove the beginning element and key
	mp.erase(8);//remove the element at that pirticular key
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		cout<<it->first<<" "<<it->second<<" ";
	}
	cout<<endl;
	cout<<mp.size()<<endl;//return size of the map
	cout<<mp.empty()<<endl;//return 1 if the map is empty
	mp.clear();//remove all elements from map
	cout<<mp.empty();





}