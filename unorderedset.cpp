//unorderedset time complexity 
//O(1)---> Averagecase
//O(N)---->Worst case
#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_set<int>s;
	for(int i=1;i<10;i++)
	{
		s.emplace(i);
	}
	for(auto it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<s.count(5);//returns true if the element is present in the set
	cout<<endl;
    s.erase(5);//delete a pirticular element(5 poped out)
	for(auto it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<s.size();//returns the size of set
	cout<<endl;//clears the set
	cout<<s.empty();//return true if set is empty
	s.clear();//removes all elements in the set
	cout<<endl;
	cout<<s.empty();
	

}