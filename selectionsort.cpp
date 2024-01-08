#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
   int mini;
	for(int i=0;i<n;i++)
	{
	  mini=i;
	  for(int j=i+1;j<n;j++)
	  {
	      if(arr[j]<arr[mini])
	      {
	         mini=j;
	      }
	  }
	  int temp=arr[mini];
	  arr[mini]=arr[i];
	  arr[i]=temp;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	selection_sort(arr,n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}