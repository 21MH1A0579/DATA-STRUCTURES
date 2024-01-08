//MINIMUM ELEMENT AND MAXIMUM ELEMENT
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(5);
	v.push_back(16);
	v.push_back(7);
	v.push_back(2);
	v.push_back(8);
	cout<<*min_element(v.begin(),v.end())<<endl;//returns smallestelement in vector
	cout<<*max_element(v.begin(),v.end());//returns largest element in vector
}
