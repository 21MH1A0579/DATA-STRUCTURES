#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int>pq;
	pq.push(2);
	pq.push(1);
	pq.push(7);
	pq.push(4);
	pq.push(2);
	// while(!pq.empty())
	// {
	// 	cout<<pq.top()<<" ";
	// 	pq.pop();
	// }
	int k=3;
	int sum=0;
	int temp;
	while(k--)
	{
		sum+=pq.top();
		temp=pq.top()/2;
		pq.pop();
		pq.push(temp);
	}
	cout<<sum;

	
}