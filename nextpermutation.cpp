//NEXT PERMUTATION
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
	for(int i=1;i<=3;i++)
	{
		v.push_back(i);
	}
	for(auto it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	next_permutation(v.begin(),v.end());
	for(auto it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}