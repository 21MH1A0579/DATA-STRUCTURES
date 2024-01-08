//UTILITES OF PAIRS
#include<bits/stdc++.h>
using namespace std;
int main()
{
	pair<int,int>p={10,20};
	cout<<p.first<<" "<<p.second<<endl;
	pair<int,pair<int,int>>p1;
	p1={10,{20,30}};
	cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int,int>arr[]={{10,20},{20,30},{30,40}};
    for(int i=0;i<3;i++)
    {
    	cout<<arr[i].first<<" "<<arr[i].second;
    	cout<<endl;
    }
	
}