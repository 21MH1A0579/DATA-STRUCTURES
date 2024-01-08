#include<bits/stdc++.h>
using namespace std;
void merge(int low,int mid,int high,int arr[],int c){
    int i=low;
    int j=mid+1;
    int temp[1000];
    int k=low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]) temp[k++]=arr[i++];
        if(arr[i]>arr[j]) 
        	{
        		temp[k++]=arr[j++];
        		c++;
        	}
    }
    while(i<=mid) temp[k++]=arr[i++];
    while(j<=high) temp[k++]=arr[j++];
    for(int i=low;i<=high;i++) arr[i]=temp[i];
}
void merge_sort(int low,int high,int arr[]){
    if(low==high) return;
    int mid=(low+high)>>1;
    merge_sort(low,mid,arr);
    merge_sort(mid+1,high,arr);
    merge(low,mid,high,arr);
}
int main(){
    int arr[]={2, 4, 1, 3, 5};
    int n=sizeof(arr)/sizeof(int);
    merge_sort(0,n-1,arr,);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}