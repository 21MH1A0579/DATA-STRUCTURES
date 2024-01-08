// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // 	int t;
// // 	cin>>t;
// // 	while(t--)
// // 	{
// // 		string s;
// // 		cin>>s;
// // 		int ac=0,bc=0,cc=0;
// // 		for(int i=0;i<s.size();i++)
// // 		{
// // 			if(s[i]=='A')
// // 			{
// // 				ac++;
// // 			}
// // 			else if(s[i]=='B')
// // 			{
// // 				bc++;
// // 			}
// // 			else
// // 			{
// // 				cc++;
// // 			}
// // 		}
// // 		if(ac+cc==bc) cout<<"YES"<<endl;
// // 		else cout<<"NO"<<endl;
// // 	}
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // 	int t;
// // 	cin>>t;
// // 	while(t--)
// // 	{
// // 		long long a,b,c;
// // 		cin>>a>>b>>c;
// // 		if(a+b+c==0 || a-b-c==0 ||a+b-c==0||a-b+c==0) cout<<"YES"<<endl;
// // 		else cout<<"NO"<<endl;
// // 	}
// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     double n;
// //     cin>>n;
// //     double res=n*2.2;
// //     cout<<fixed<<setprecision(2)<<res;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++) cin>>arr[i];
// //     int k,sum=0,len=0;
// //     cin>>k;
// //     for(int i=0;i<n;i++)
// //     {
// //         sum=0;
// //         for(int j=i;j<n;j++)
// //         {
// //             sum+=arr[j];
// //             if(sum%k==0)
// //             {
// //                 len=max(len,j-i);
// //             }
// //         }
// //     }
// //     cout<<len+1;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n,k;
// //     cin>>n;
// //     cin>>k;
// //     int arr[n];
// //     for(int i=0;i<n;i++) cin>>arr[i];
// //     vector<int>v;
// //     int maxi=0;
// //     for(int i=0;i<=n-k;i++)
// //     {
// //     	maxi=0;
// //         for(int j=i;j<i+k;j++)
// //         {
// //             maxi=max(maxi,arr[j]);
// //         }
// //         v.push_back(maxi);
// //     }
// //     if(k==1)
// //     {
// //        for(int i=0;i<n;i++)
// //        {
// //         cout<<arr[i]<<" ";
// //        }
// //     }
// //     else
// //     {
// //     for(int i=0;i<v.size();i++)
// //     {
// //     	cout<<v[i]<<" ";
// //     }
// //     }
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     int sum=0;
// //     for(int i=1;i<n;i++)
// //     {
// //         if(n%i==0) sum+=i;
// //     }
// //     if(sum>n) cout<<"True";
// //     else cout<<"False";
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n,k;
// //     cin>>n>>k;
// //     int arr[n];
// //     for(int i=0;i<n;i++) cin>>arr[i];
// //     	int z=n-k;
// //     int i=n-1;
// //     int sum=0;
// //     while(z--)
// //     {
// //        sum+=arr[i];
// //         i--;
// //     }
// //     cout<<sum;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     long long n,k;
// //     cin>>n>>k;
// //     long long arr[n];
// //     for(int i=0;i<n;i++) cin>>arr[i];
// //     unordered_map<int,int>mp;
// //     int f=0;
// //     for(int i=0;i<n;i++)
// //     {
// //         mp[arr[i]]++;
// //         if(mp[arr[i]]==k)
// //         {
// //             cout<<arr[i];
// //             f=1;
// //             break;
// //         }
// //     }
// //     if(f==0) cout<<-1;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++) cin>>arr[i];
// //     int k,sum=0,len=0;
// //     cin>>k;
// //     for(int i=0;i<n;i++)
// //     {
// //         sum=0;
// //         for(int j=i;j<n;j++)
// //         {
// //             sum+=arr[j];
// //             if(sum==0)
// //             {
// //                 len=max(len,j-i);
// //             }
// //         }
// //     }
// //     cout<<len+1;
// // }
// // #include <iostream>
// // using namespace std;
// // int main() {
// //     int t;
// //     cin >> t;
// // while(t--) {
// //         int N, K, L;
// //         cin >> N >> K >> L;
// //         cout << (N*(N-1)/2)-(K*(K-1)/2)-(L*(L-1)/2)<<endl;
// //     }

// // }
// //hidden testcase failed
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // 	string s1,s2;
// // 	cin>>s1;
// // 	cin>>s2;
// // 	int sum1=0,sum2=0;
// // 	if(s1.size()==s2.size())
// // 	{
// // 		for(int i=0;i<s1.size();i++)
// // 		{
// // 			sum1+=int(s1[i]);
// // 			sum2+=int(s2[i]);
// // 		}
// // 		if(sum1==sum2) cout<<1;
// // 		else cout<<0;
// // 	}
// // 	else cout<<0;

// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // void InsertStack(stack<int>&s,int x)
// // {
// // 	if(s.empty() || x>s.top())
// // 	{
// // 		s.push(x);
// // 		return;
// // 	}
// // 	int top=s.pop();
// // 	InsertStack(s,x);

// // }
// // void StackSort(stack<int>&s)
// // {
// // 	if(s.empty()) return;
// // 	int x=s.pop();
// // 	StackSort(s);
// // 	InsertStack(s,x);

// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++) cin>>arr[i];
// //     sort(arr,arr+n);
// //     int sum=0,diff;
// //     for(int i=1;i<n;i++)
// //     {
// //         if(arr[i]<=arr[i-1])
// //         {
// //             diff=arr[i-1]-arr[i]+1;
// //             sum+=diff;
// //             arr[i]+=diff;
// //         }
// //     }
// //     cout<<sum;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// //  bool containsNearbyDuplicate(int nums[], int k,int n) 
// //     {
// //        for(int i=0;i<n;i++)
// //        {
// //            for(int j=i+1;j<=(i+1)+(k-1);j++)
// //            {
// //                if(nums[i]==nums[j] and j<n) 
// //                	{
// //                		cout<<i<<j;
// //                		return true;
// //                	}
// //            }
// //        } 
// //       return false;  
// //     }
// // int main()
// // {
// // 	int n,k;
// // 	cin>>n>>k;
// // 	int arr[n];
// // 	for(int i=0;i<n;i++) cin>>arr[i];
// // 		cout<<containsNearbyDuplicate(arr,k,n);
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     int arr[n],brr[n];
// //     vector<int>v;
// //     for(int i=0;i<n;i++)
// //     {
// //         cin>>arr[i];
// //         v.push_back(arr[i]);
// //     }
// //     for(int i=0;i<n;i++)
// //     {
// //         cin>>brr[i];
// //         v.push_back(brr[i]);
// //     }
// //     sort(v.begin(),v.end());
// //     int k=v.size();
// //     if(k%2)
// //     {
// //         cout<<v[(k+1)/2];
// //     }
// //     else
// //     {
// //         float z=k/2;
// //         cout<<((z+(z+1))/2);
// //     }

// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++) cin>>arr[i];
// //     int mid=floor((n+1)/2);
// // for(int i=0;i<n;i++)
// // {
// // 	if(mid-1==i)
// // 	{
// // 		continue;
// // 	}
// // 	else
// // 	{
// // 		cout<<arr[i]<<" ";
// // 	}
// // }
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++) cin>>arr[i];
// //     for(int i=0;i<n-1;i++)
// //     {
// //         if(arr[i]>arr[i+1])
// //         {
// //             cout<<arr[i+1]<<" ";
// //         }
// //         else
// //         {
// //             cout<<-1<<" ";
// //         }
// //     }
// //     cout<<-1;
// // }
// def matrix_multiplication(matrix1, matrix2):
//     M1, N1 = len(matrix1), len(matrix1[0])
//     M2, N2 = len(matrix2), len(matrix2[0])
//     #if N1 != M2:
//         #return "Matrix multiplication is not possible."
//     result = [[0 for _ in range(N2)] for _ in range(M1)]
//     for i in range(M1):
//         for j in range(N2):
//             for k in range(N1):
//                 result[i][j] += matrix1[i][k] * matrix2[k][j]
//     return result
// M1, N1 = map(int, input().split())
// arr1 = [list(map(int, input().split())) for _ in range(M1)]
// M2, N2 = map(int, input().split())
// arr2 = [list(map(int, input().split())) for _ in range(M2)]
// res= matrix_multiplication(arr1,arr2)
// for i in res:
//     print(*i)


//  grumpy seller
//  --------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n;
//     int cust[n],grumpy[n];
//     for(int i=0;i<n;i++){
//         cin>>cust[i];
//     }
//     for(int i=0;i<n;i++){
//         cin>>grumpy[i];
//     }
//     cin>>k;
//     int sumi=0,satisfied=0,maxi=0;
//     for(int i=0;i<n;i++){
//         sumi+=cust[i];
//         cust[i] *=grumpy[i];
//         satisfied +=cust[i];
//     }
//     for(int i=0;i<=n-k;i++){
//         int mi=k,c=0,j=i;
//         while(mi--){
//             c+=cust[j++];
//         }
//         if(c>maxi) maxi=c;
//     }
//     cout<<sumi-satisfied+maxi;
// }
//  sum divible by K
//  -----------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     int k;
//     cin>>k;
//     unordered_map<int,int> mp;
//     int sum=0,res=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//         sum%=k;
//         if(sum<0) sum+=k;
//         if(sum==0){
//             if(res<i+1) res=i+1;
//         }
//         else{
//             if(mp.find(sum)!=mp.end()){
//                 if(res<i-mp[sum]) res=i-mp[sum];
//             }
//             else{
//                 mp[sum]=i;
//             }
//         }
//     }
//     cout<<res;
// }
//    find the maximum
//    ------------------
// #include <bits/stdc++.h>
// using namespace std;
// void findMaxValues(vector<int>& arr, int K) {
//     deque<int> dq;
//     for (int i = 0; i < K; i++) {
//         while (!dq.empty() && arr[i] >= arr[dq.back()]) {
//             dq.pop_back();
//         }
//         dq.push_back(i);
//     }
//     for (int i = K; i < arr.size(); i++) {
//         cout << arr[dq.front()] << " ";
//         while (!dq.empty() && dq.front() <= i - K) {
//             dq.pop_front();
//         }
//         while (!dq.empty() && arr[i] >= arr[dq.back()]) {
//             dq.pop_back();
//         }
//         dq.push_back(i);
//     }
//     cout << arr[dq.front()] << endl;
// }

// int main() {
//     int n, K;
//     cin >> n >> K;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     findMaxValues(arr, K);
// }
// def evaluate_expression(x, y, z):
//     operators = ['+', '-', '+', '-', '+', '-']
//     for A in operators:
//         for B in operators:
//             for C in operators:
//                 result = eval(f"{x} {A} {y} {B} {z} {C} 0")
//                 if result == 0:
//                     return "YES"
    
//     return "NO"
// t = int(input())
// for _ in range(t):
//     x, y, z = map(int, input().split())
//     result = evaluate_expression(x, y, z)
//     print(result)

//  aggresive cows
//  --------------
// #include<bits/stdc++.h>
// using namespace std;
// bool fun(vector<int> &v,int mid,int k){
//     int c=1,last=v[0];
//     for(int i=1;i<v.size();i++){
//         if((v[i]-last)>=mid){
//             c++;
//             last=v[i];
//         }
//     }
//     return (c>=k);
// }
// int main(){
//     int n,k;
//     cin>>n>>k;
//     int arr[n];
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         v.emplace_back(arr[i]);
//     }
//     sort(v.begin(),v.end());
//     int m=v.size();
//     int low=0,high=v[m-1]-v[0];
//     while(low<=high){
//         int mid=(low+high)>>1;
//         if(fun(v,mid,k)==true) low=mid+1;
//         else high=mid-1;
//     }
//     cout<<high;
// }
//   split array into largest sum
//   ---------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int fun(vector<int>&v,int mid){
//     int c=1;
//     long long sum=0;
//     for(int i=0;i<v.size();i++){
//         if(sum+v[i]<=mid) sum+=v[i];
//         else{
//             c++;
//             sum=v[i];
//         } 
//     }
//     return c;
// }
// int main(){
//     int n,k;
//     cin>>n>>k;
//     int arr[n];
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         v.emplace_back(arr[i]);
//     }
//     int low=*max_element(v.begin(),v.end());
//     int high=accumulate(v.begin(),v.end(),0);
//     while(low<=high){
//         int mid=(low+high)/2;
//         int res=fun(v,mid);
//         if(res>k) low=mid+1;
//         else high=mid-1;
//     }
//     cout<<low;
// }
   steps
   -------
def max_consecutive_steps(heights):
    if not heights:
        return 0

    max_steps = 1  # At least one step (the current building)
    current_steps = 1

    for i in range(1, len(heights)):
        if heights[i] > heights[i - 1]:
            current_steps += 1
            max_steps = max(max_steps, current_steps)
        else:
            current_steps = 1

    return max_steps

# Input
heights = [1, 2, 2, 3, 2]

# Calculate and print the result
result = max_consecutive_steps(heights)
print(result)

//  towers
//  ---------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         bool flag=false;
//         for(int j=0;j<v.size();j++){
//             if(arr[i]<v[j]){
//                 v[j]=arr[i];
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag==false) v.emplace_back(arr[i]);
//     }
//     cout<<v.size();     
// }
//  can plant
//  ------------
// #include<bits/stdc++.h>
// using namespace std;
// bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//     int count = 0;
//     int i = 0;
//     while (i < flowerbed.size()) {
//         if (flowerbed[i] == 0) {
//             if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
//                 flowerbed[i] = 1;
//                 count++;
//             }
//         }
//         i++;
//     }
//     return count >= n;
// }
// int main() {
//     vector<int> flowerbed;
//     int val;
//     while (cin >> val) {
//         flowerbed.push_back(val);
//     }
//     int n;
//     cin>>n;
//     bool result = canPlaceFlowers(flowerbed, n);
//     cout << (result ? "true" : "false");
// }
//    coloring sequence
//    -----------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++) cin>>arr[i];
//     int c=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==1){
//             if(i>0 && arr[i-1]==0){
//                 arr[i]=0;
//                 c++;
//             }
//        }
//        else if(arr[i]==2){
//         if(i>=0 &&(arr[i-1]==0 || arr[i-1]==1)){
//             arr[i]=1;
//             c++;
//         }
//         else if(i<=n-1 && (arr[i+1]==0 || arr[i+1]==1)){
//             arr[i]=1;
//             c++;
//         }
//        }
//     }
//     cout<<c;
// }
// maximim profit 
// --------------
// #include<bits/stdc++.h>
// using namespace std;
// bool comp(vector<int>&a,vector<int>&b){
//     if(a[0]==b[0] && a[1]==b[1]) return a[2]>b[2];
//     else if(a[0]==b[0]) return a[1]<b[1];
//     else if(a[1]==b[1]) return a[0]<b[0];
//     else return a[0]<=b[0];
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>> arr(n,vector<int>(3));
//     for(int i=0;i<n;i++){
//         cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
//     }
//     sort(arr.begin(),arr.end(),comp);
//     vector<int>v(n,0);
//     for(int i=0;i<n;i++) v[i]=arr[i][2];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             if(arr[j][0]<arr[i][0] && arr[j][1]<=arr[i][0]){
//                 v[i]=max(v[i],arr[i][2]+v[j]);
//             }
//         }
//     }
//     int maxi=0;
//     for(int i=0;i<n;i++){
//         maxi=max(maxi,v[i]); 
//     }
//     cout<<maxi;
// }
// candies
// -------
// def minimumCost(cost):
//     cost.sort()
//     total_cost = 0
//     n = len(cost)
//     i = n - 1
//     while i >= 0:
//         if i >= 2:
//             total_cost += cost[i] + cost[i - 1]
//             i -= 3
//         else:
//             total_cost += sum(cost[:i+1])
//             break
//     return total_cost
// n = int(input())
// cost = list(map(int, input().split()))
// result = minimumCost(cost)
// print(result)
 
//  elimination game Disqualification of Member
//  ---------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     bool flag=true;
//     int res=1,steps=1,temp=n;
//     while(temp>1){
//         if(flag==true || (temp&1)) res+=steps;
//         steps*=2;
//         temp/=2;
//         flag=!flag;
//     }
//     cout<<res;
// }
// string magic 2
// --------------
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     int num = 0; 
//     int totalSum = 0;
//     bool isNegative = false;
//     for (char ch : s) {
//         if (isdigit(ch)) num=num*10+(ch-'0');
//         else if (ch == '-') isNegative = true;
//         else{
//             if(isNegative) {
//                 num *= -1;
//             }
//             totalSum += num;
//             num = 0;
//             isNegative = false;
//         }
//     }
//     if (isNegative) {
//         num *= -1;
//     }
//     totalSum += num;
//     cout<<totalSum;
// }
// long pressed key
// ----------------
// #include<bits/stdc++.h>
// using namespace std;
// bool fun(string& original,string& typed) {
//     int i = 0, j = 0;
//     while (j < typed.length()) {
//         if (i < original.length() && original[i] == typed[j]) i++;
//         else if (j == 0 || typed[j] != typed[j - 1]) return false;
//         j++;
//     }
//     return i == original.length();
// }
// int main() {
//     string original, typed;
//     cin >> original >> typed;
//     bool res = fun(original, typed);
//     cout << (res ? "true" : "false");
// }
//  parenthesis
//  ---------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     stack<char> st;
//     string res="";
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='('){
//             if(!st.empty()) res+=s[i];
//             st.push(s[i]);
//         }
//         else{
//             st.pop();
//             if(!st.empty()) res+=s[i];
//         }
//     }
//     cout<<res;
// }
// #include<bits/stdc++.h>
// using namespace std;
// bool divisible(int n,int k){
//     return n%k==0;
// }
// bool sum_digit(int n,int k){
//     int sum=0;
//     while(n){
//         sum+=n%10;
//         n/=10;
//     }
//     return sum%k==0;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,k,c=0;
//         cin>>a>>b>>k;
//         for(int i=a;i<=b;i++){
//             if(divisible(i,k) && sum_digit(i,k)) c++;
//         }
//         cout<<c<<endl;
//     }
// }
//   non-descending array
// -----------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     stack<pair<int,int>> st;
//     int maxi=0;
//     st.push({arr[n-1],0});
//     for(int i=n-2;i>=0;i--){
//         int steps=0;
//         while(!st.empty() && st.top().first<arr[i]){
//             steps=max(steps+1,st.top().second);
//             st.pop();
//         }
//         maxi=max(maxi,steps);
//         st.push({arr[i],steps});
//     }
//     cout<<maxi;
// }
// def fun(a, b, d, k):
//     def d_count(num, digit):
//         return str(num).count(str(digit))
//     count = 0
//     for num in range(a, b + 1):
//         if d_count(num, d) == k:
//             count += 1
//     return count
// a, b, d, k = map(int, input().split())
// result = fun(a, b, d, k)
// print(result)

// reverse letter
// --------------
// #include <bits/stdc++.h>
// using namespace std;
// bool alpha(char c) {
//     return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
// }
// string Reverse(string s) {
//     int low = 0, high = s.length() - 1;
//     while (low < high) {
//         while (low < high && !alpha(s[low])) {
//             low++;
//         }
//         while (low < high && !alpha(s[high])) {
//             high--;
//         }
//         if (low < high) {
//             swap(s[low],s[high]);
//             low++;
//             high--;
//         }
//     }
//     return s;
// }
// int main() {
//     string s;
//     cin>>s;
//     string res= Reverse(s);
//     cout<<res;
// }


// def is_lucky_number(number):
//     while number > 0:
//         digit = number % 10
//         if digit != 4 and digit != 7:
//             return False
//         number //= 10
//     return True
// def count_lucky_digits(number):
//     count = 0
//     while number > 0:
//         digit = number % 10
//         if digit == 4 or digit == 7:
//             count += 1
//         number //= 10
//     return count
// def is_almost_lucky(number):
//     count = count_lucky_digits(number)
//     return is_lucky_number(count)
// t = int(input())
// for _ in range(t):
//     n = int(input())
//     if is_almost_lucky(n):
//         print("YES")
//     else:
//         print("NO")

// vowel substring
// ----------------
// #include<bits/stdc++.h>
// using namespace std;
// bool isVowel(char c) {
//     return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
// }
// int fun(string s) {
//     int ans = 0;
//     int n = s.size();
//     for (int i = 0; i < n; i++) {
//         unordered_set<char> st;
//         for (int j = i; j < n; j++) {
//             char ch = s[j];
//             if (!isVowel(ch)) break;
//             st.insert(ch);
//             ans += st.size() == 5;
//         }
//     }
//     return ans;
// }
// int main(){
//     string s;
//     cin>>s;
//     int res=fun(s);
//     cout<<res;
// }

// minimum number
// --------------
// def fun(n):
//     res = 0
//     for digit in range(9, 0, -1):
//         if n >= digit:
//             res = res * 10 + digit
//             n -= digit
//     return res

// n = int(input())
// res = fun(n)
// reversed_res = int(str(res)[::-1])
// print(reversed_res)

// slide the bar
// --------------
// #include <bits/stdc++.h>
// using namespace std;
// bool fun(vector<int>& nums, int k) {
//     unordered_map<int, int> mp;
//     for (int i = 0; i < nums.size(); i++) {
//         int num = nums[i];
//         if (mp.find(num) != mp.end() && abs(i - mp[num]) <= k) {
//             return true;
//         }
//         mp[num] = i;
//     }
//     return false;
// }
// int main() {
//     int n, k;
//     cin >> n;
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }
//     cin>> k;
//     bool result =fun(nums, k);
//     if (result){
//         cout << "true" << endl;
//     }
//     else{
//         cout << "false" << endl;
//     }

//     return 0;
// }
// substring 0f size three
// -------------------------
// def fun(s):
//     count = 0
//     for i in range(len(s) - 2):
//         substring = s[i:i+3]
//         if len(set(substring)) == 3:
//             count += 1
//     return count
// s = input()
// result = fun(s)
// print(result)

// uncommon words
// --------------
// def uncommon_words(s1, s2):
//     ws1 = s1.split()
//     ws2 = s2.split()
//     set_s1 = set(ws1)
//     set_s2 = set(ws2)
//     arr = list(set_s1.symmetric_difference(set_s2))
//     arr.sort(key=lambda i: (i in ws1, i in ws2))
//     return arr
// s1 = input()
// s2 = input()
// res=uncommon_words(s2, s1)
// print(" ".join(res))

// kth prime factor
// ------------------
// def is_prime(num):
//     if num <= 1:
//         return False
//     if num <= 3:
//         return True
//     if num % 2 == 0 or num % 3 == 0:
//         return False
//     i = 5
//     while i * i <= num:
//         if num % i == 0 or num % (i + 2) == 0:
//             return False
//         i += 6
//     return True
// def kth_prime_factor(n, k):
//     primes = []
//     candidate = 2
//     while n > 1:
//         if is_prime(candidate) and n % candidate == 0:
//             primes.append(candidate)
//             n //= candidate
//             if len(primes) == k:
//                 return primes[-1]
//         else:
//             candidate += 1
//     return -1
// n = int(input())
// k = int(input())
// result = kth_prime_factor(n, k)
// print(result)

//    twin prime:
//    -----------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int L,R;
//     cin>>L>>R;
//     vector<bool>isprime(R+1,false);
//     vector<int>prime;
//     for(int i=2;i<=R;i++){
//         if(isprime[i]==false)
//         {
//             isprime[i]=true;
//             if(i>=L)
//             prime.push_back(i);
//             for(int j=i*i;j<R+1;j+=i)
//             {
//                 isprime[j]=true;
//             }
//         }
//     }
//     vector<int>ans;
//     for(int i=1;i<prime.size();i++)
//     {
//         if(prime[i-1]+2==prime[i])
//         {
//             ans.push_back(prime[i-1]);
//             ans.push_back(prime[i]);
//         }
//     }
//     for(int i=0;i<ans.size()-1;i+=2){
//         cout<<ans[i]<<" "<<ans[i+1]<<endl;
//     }
// }

//    solve the equation
//    ------------------
//    import math
// def fun(n):
//     a = 1
//     b = 1
//     c = 1 - n
//     disc = b**2 - 4*a*c
//     if disc >= 0:
//         n1 = (-b + math.sqrt(disc)) / (2*a)
//         n2 = (-b - math.sqrt(disc)) / (2*a)
//         if n1 >= 0 and n1.is_integer():
//             return int(n1)
//         elif n2 >= 0 and n2.is_integer():
//             return int(n2)
// T = int(input())
// results = []
// for _ in range(T):
//     n = int(input())
//     res = fun(n)
//     results.append(res)
// for i in results:
//     print(i)

//  subarray with given sum
//  ------------------------
//  #include <bits/stdc++.h>
// using namespace std;
// int fun(vector<int> &v, int k) {
//     int count = 0;
//     int currentSum = 0;
//     unordered_map<int, int> mp;
//     mp[0] = 1;
//     for (int i : v) {
//         currentSum += i;
//         if (mp.find(currentSum - k) != mp.end()) {
//             count += mp[currentSum - k];
//         }
//         mp[currentSum]++;
//     }
//     return count;
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     int k;
//     cin >> k;
//     int res=fun(v,k);
//     cout<<res;
// }
//   minimum size subarray with sum
//   ------------------------------
//   def fun(nums, k):
//     if not nums:
//         return 0
//     min_length = float('inf')
//     current_sum = 0
//     left = 0
//     for right in range(len(nums)):
//         current_sum += nums[right]
//         while current_sum >= k:
//             min_length = min(min_length, right - left + 1)
//             current_sum -= nums[left]
//             left += 1
//     return min_length if min_length != float('inf') else 0
// N = int(input())
// arr= list(map(int, input().split()))
// k = int(input())
// result = fun(arr,k)
// print(result)

//    climbing stairs
//    ----------------
//    def climbStairs(n):
//     if n <= 1:
//         return 1
//     dp = [0] * (n + 1)
//     dp[0] = 1
//     dp[1] = 1
//     for i in range(2, n + 1):
//         dp[i] = dp[i - 1] + dp[i - 2]
//     return dp[n]
// n=int(input())
// result = climbStairs(n)
// print(result)

// online shopping cart
// --------------------
// #include <bits/stdc++.h>
// using namespace std;
// int fun(vector<int>& cart) {
//     int n = cart.size();
//     if (n == 0) {
//         return -1;
//     }
//     int totalSum = accumulate(cart.begin(),cart.end(),0);
//     int leftSum = 0;
//     for (int i = 0; i < n; i++) {
//         totalSum -= cart[i];
//         if (leftSum == totalSum) {
//             return i;
//         }
//         leftSum += cart[i];
//     }
//     return -1;
// }
// int main() {
//     int T;
//     cin >> T;
//     while(T--) {
//         int N;
//         cin >> N;
//         vector<int> cart(N);
//         for (int i = 0; i < N; i++) {
//             cin >> cart[i];
//         }
//         int res = fun(cart);
//         cout << res << endl;
//     }
// }
//   three sum
//   ----------
// #include <bits/stdc++.h>
// using namespace std;
// int fun(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
//     int count = 0;
//     int n = nums.size();
//     for (int i = 0; i < n-2; i++) {
//         if (i == 0 || (i > 0 && nums[i] != nums[i - 1])) {
//             int low = i + 1;
//             int high = n - 1;
//             while (low < high) {
//                 int total = nums[i] + nums[low] + nums[high];
//                 if (total == 0) {
//                     count++;
//                     while (low < high && nums[low] == nums[low+1]) low++;
//                     while (low < high && nums[high] == nums[high-1]) high--;
//                     low++;
//                     high--;
//                 }
//                 else if (total < 0) low++;
//                 else high--;
//             }
//         }
//     }
//     return count;
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++) cin >> nums[i];
//     int result = fun(nums);
//     cout << result;
// }
//      word  game
//      ---------
//      S = input()
// n = int(input())
// part= len(S) // n
// if len(S) % n == 0:
//     divided_string = [S[i:i+part] for i in range(0, len(S), part)]
//     print(" ".join(divided_string))
// else:
//     print("Invalid String")

//     missing letters
//     --------------
// S = input().lower()
// letters_in_sentence = set(S)
// missing = []
// for letter in 'abcdefghijklmnopqrstuvwxyz':
//     if letter not in letters_in_sentence:
//         missing.append(letter)
// if missing:
//     missing.sort()
//     print("".join(missing))
// else:
//     print("0")

//    rotated array
//    -------------
//    n, k = map(int, input().split())
// arr = list(map(int, input().split()))
// k = k % n
// rotated_arr = arr[-k:] + arr[:-k]
// print(" ".join(map(str, rotated_arr)))


// minimum digit element
// ----------------------
// def fun(arr):
//     if not arr:
//         return 0
//     min_digits = len(str(min(arr, key=lambda x: (len(str(x)), x))))
//     count = sum(1 for num in arr if len(str(num)) == min_digits)
//     return count
// N = int(input())
// arr = list(map(int, input().split()))
// result = fun(arr)
// print(result)

// sorting the array
// ------------------
// n = int(input())
// arr = list(map(int, input().split()))
// start = -1
// end = -1
// for i in range(n - 1):
//     if arr[i] > arr[i + 1]:
//         start = i
//         break
// if start == -1:
//     print("yes")
//     print("1 1")
//     exit()
// for i in range(n - 1, 0, -1):
//     if arr[i] < arr[i - 1]:
//         end = i
//         break
// reverse = arr[start:end + 1][::-1]
// if arr[:start] + reverse + arr[end + 1:] == sorted(arr):
//     print("yes")
//     print(start + 1, end + 1)
// else:
//     print("no")

//  power of a number
//  ------------------
// def modular_exponentiation(x, y, M):
//     result = 1

//     while y > 0:
//         if y % 2 == 1:
//             result = (result * x) % M
//         x = (x * x) % M
//         y //= 2

//     return result

// x, y, M = map(int, input().split())
// result = modular_exponentiation(x, y, M)
// print(result)

// power using recursions
// ------------------------
// def power(a, n):
//     if n == 0:
//         return 1
//     elif n % 2 == 0:
//         sub = power(a, n // 2)
//         return sub*sub
//     else:
//         return a * power(a, n - 1)
// a = int(input())
// n = int(input())
// result = power(a, n)
// print(result)

//  reverse string using recursions:
//  ---------------------------------
//  def reverse_string(input_string):
//     if len(input_string) <= 1:
//         return input_string
//     middle = input_string[1:-1]
//     return input_string[-1] + reverse_string(middle) + input_string[0]

// input_string = input()
// result = reverse_string(input_string)
// print(result)
// Equlibrium point
// ================
// def find_equilibrium_index(arr):
//     n = len(arr)
    
//     # Calculate the total sum of the array
//     total_sum = sum(arr)
    
//     # Initialize the left sum to 0
//     left_sum = 0
    
//     for i in range(n):
//         # Update the total sum and right sum
//         total_sum -= arr[i]
//         right_sum = total_sum
        
//         # Check if the left sum and right sum are equal
//         if left_sum == right_sum:
//             return i
        
//         # Update the left sum for the next iteration
//         left_sum += arr[i]
    
//     # If no equilibrium index is found, return -1
//     return -1

// # Read the number of test cases
// T = int(input())

// for _ in range(T):
//     # Read the size of the array and the array itself
//     N = int(input())
//     arr = list(map(int, input().split()))

//     # Find and print the equilibrium index for each test case
//     equilibrium_index = find_equilibrium_index(arr)
//     print(equilibrium_index)
// find element appear once
// =========================
// def find_single_occurrence(arr):
//     result = 0
//     for num in arr:
//         result ^= num
//     return result
// N = int(input())
// arr = list(map(int, input().split()))
// unique_number = find_single_occurrence(arr)
// print(unique_number)
