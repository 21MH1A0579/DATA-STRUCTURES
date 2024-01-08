//STACK
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int>s;
	for(int i=1;i<10;i++)
	{
		s.push(i);
	}
	int n=s.size();
	cout<<n<<endl;
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	
}