#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v;
   for(int i=1;i<10;i++)
   {
   	v.push_back(i);
   }
   int k=*min_element(v.begin(),v.end());
   for(auto it=v.begin();it!=v.end();it++)
   {
   	cout<<*it<<" ";
   }cout<<endl;
   cout<<v.size();//returns the size of the vector
   cout<<endl;
   cout<<v.front()<<endl;//returns first element
   cout<<v.back()<<endl;//returns last element
   v.pop_back();//pops last element from the vector
   for(auto it=v.begin();it!=v.end();it++)
   {
   	cout<<*it<<" ";
   }
   cout<<endl;
   v.insert(v.begin()+5,10);//insert element at a pirticular position
   for(auto it=v.begin();it!=v.end();it++)
   {
   	cout<<*it<<" ";
   }
   v.clear();//remove all elements in vector
   cout<<endl;
   for(auto it=v.begin();it!=v.end();it++)
   {
   	cout<<*it<<" ";
   }
 
   cout<<v.empty();//returns true if vector is empty



}
