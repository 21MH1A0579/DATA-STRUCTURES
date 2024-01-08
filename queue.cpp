//QUEUE
#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int>q;
	for(int i=5;i<=10;i++)
	{
		q.push(i);
	}

	for(auto it=q.front();it!=q.back();it++)
	{
		cout<<it<<" ";
	}
	q.pop();
	cout<<endl;
	for(auto it=q.front();it!=q.back();it++)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	cout<<q.size()<<endl;
	cout<<q.empty();
}