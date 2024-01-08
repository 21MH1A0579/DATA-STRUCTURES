//DEQUEUE(DOUBLE ENDED QUEUE)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	deque<int>dq;
	for(int i=1;i<10;i++)
	{
		dq.push_back(i);//insert at back
	}
	dq.push_front(0);//insert at starting
	dq.pop_front();//remove at starting
	dq.pop_back();//remove last element
	for(auto it=dq.begin();it!=dq.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl<<dq.front()<<" "<<dq.back()<<endl;
	cout<<dq.size();
	cout<<endl<<dq.empty();
}