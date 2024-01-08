//an unordered set the only difference is 
//it can store duplicate elements in it.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_multiset<int>s;
	for(int i=0;i<10;i++)
	{
		s.insert(i);
	}
	s.insert(5);
	s.insert(6);
	for(auto it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
}