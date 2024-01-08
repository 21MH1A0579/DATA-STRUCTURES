#include<bits/stdc++.h>
using namespace std;
int a=0,b=1;
vector<int>v;
vector<int>fibnocii(int n)
{
   if(n==0) return v;
   int c=a+b;
   a=b;
   b=c;
   v.push_back(c);
   return fibnocii(n-1);
}
int main()
{
	int n;
	cin>>n;
	vector<int>vect=fibnocii(n-2);
	for(auto it=vect.begin();it!=vect.end();it++)
	{
		cout<<*it<<" ";
	}

}