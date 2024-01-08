//LIST
#include<bits/stdc++.h>
using namespace std;
int main()
{
	list<int>l;
	for(int i=1;i<10;i++)
	{
		l.push_back(i);//adds elements at last
	}
	l.pop_back();//removes element at last
	l.push_front(0);//add element at first
	l.pop_front();//removes element at first
	l.push_front(10);
	l.sort();
	for(auto it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	l.reverse();
	for(auto it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<l.front()<<endl;//returns fisrt element
	cout<<l.back()<<endl;//returns last element
	cout<<l.size()<<endl;//returns size
	cout<<l.empty();//returns 1 if list is empty

}