//set stores unique elements
//time complexity average --->O(1)
//worst case---->O(N)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int>s;
	s.insert(1);
	s.insert(2);
	s.insert(4);
	s.insert(4);
	s.insert(5);
	s.insert(6);
	for(auto it=s.begin();it!=s.end();it++)
	{
        cout<<*it<<" ";
	}	
	cout<<endl;
	if(s.find(2)!=s.end())//search element is present or not
      cout<<"true"<<endl;
	cout<<s.count(7);//returns(0 or 1)if the pirticular elemnt is present are not
	cout<<endl;
	s.erase(5);
	for(auto it=s.begin();it!=s.end();it++)
	{
        cout<<*it<<" ";
	}	
	cout<<endl;
	cout<<s.size()<<endl;//returns size
	cout<<s.empty();//return 0 if set is not empty
	s.clear();
	for(auto it=s.begin();it!=s.end();it++)
	{
        cout<<*it<<" ";
	}	
}