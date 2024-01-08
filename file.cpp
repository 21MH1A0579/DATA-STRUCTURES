// #include<bits/stdc++.h>
// using namespace std;
// bool isprime(int n)
// {
//     if(n==0 || n==1) return false;
//     if(n==2) return true;
//     else
//     {
//         for(int i=2;i<sqrt(n)+1;i++)
//         {
//             if(n%i==0) return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int lp=0,hp=0;
//     for(int i=n+1;;i++)
//     {
//         if(isprime(i))
//         {
//             hp=i;
//             break;
//         }
//     }
//     for(int j=n-1;j>=0;j--)
//     {
//         if(isprime(j))
//         {
//             lp=j;
//             break;
//         }
//     }
//     int k;
//     if(lp<2)
//     {
//     	k=hp;
//     }
//     else
//     {
//        k=min(lp,hp);
//     }
//     cout<<abs(n-k);

// }
// #include<bits/stdc++.h>
// using namespace std;
// int OctaltoDecimal(int n)
// {
//     if(n==0) return 0;
//     else
//     {
//         return n%10+8*OctaltoDecimal(n/10);
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<OctaltoDecimal(n);
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     cout<<max({a,b,c});
// }
// 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int a,b;
//         cin>>a>>b;
//         if(a<b)
//         {
//             cout<<a<<endl;
//         }
//         else
//         {
//             cout<<(a/b)+(a%b)<<endl;
//         }
//     }
// }
// 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	string s,res;
// 	cin>>s;
// 	for(int i=0;i<s.size();i++)
// 	{
// 		if(char(s[i]+32)==s[i+1] or char(s[i]-32)==s[i+1] )
// 		{
// 			s.erase(i+1,1);
// 		}
// 	}
// cout<<s;
// }
// // #include<bits/stdc++.h>
// // using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     map<int,int>mp;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         mp[arr[i]]++;
//     }
//     int k=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(mp[arr[i]]>n/2)
//         {
//             k=arr[i];
//         }
//     }
//     cout<<k;

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     string s;
//     for(int i=0;i<n;i++)
//     {
//         char ch;
//         cin>>ch;
//         s+=ch;
//     }
//     cout<<s;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     if(s[0]=='0')
//     {
//     sort(s.begin()+1, s.end(), greater<char>());
//     cout<<s.substr(1);
//     }
//     else
//     {
//     	sort(s.begin(), s.end(), greater<char>());
//     	 cout<<s;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     float uc;
//     if(n<200) uc=1.20;
//     else if(n<400) uc=1.40;
//     else if(n<600) uc=1.60;
//     else if(n<800) uc=1.80;
//     else uc=2.00;
//     float bill=uc*n;
//     float sc;
//     if(bill>400)
//     {
//         sc=bill*0.15;
//     }
//     float tamt=bill+sc;
//     printf("Units Consumed: %d\n",n);
//     printf("Cost per Unit: %.2f\n",uc);
//     printf("Bill: %.2f\n",bill);
//     printf("Surcharge: %.2f\n",sc);
//     printf("Total Amount: %.2f",tamt);

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     stack<char> st;
//     string res="";
//     for(int i=0;i<s.size();i++){
//         if(!st.empty()){
//             if(st.top()-'A'==s[i]-'a'|| st.top()-'a'==s[i]-'A'){
//                 st.pop();
//                 continue;
//             }
//         }
//         st.push(s[i]);
//     }
//     while(!st.empty()){
//         res+=st.top();
//         st.pop();
//     }
//     reverse(res.begin(),res.end());
//     cout<<res;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int n;
//    cin>>n;
//    int rev=0,r=0;
//    int k=n;
//    while(n)
//    {
//     r=n%10;
//     rev=rev*10+r;
//     n=n/10;
//    }
   
//     cout<<rev;
   
   
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
   
//    string s;
//    cin>>s;
//    map<char,int>mp;
//     vector<int> v;
//    for(int i=0;i<s.size();i++)
//    {
//    	  mp[s[i]]++;
//    }
//    for(auto it:mp)
//    	{
//    		cout<<it.first<<"->"<<it.second<<endl;
//    		v.push_back(it.second);
//    	}
//    	sort(v.begin(),v.end(),greater<int>());
//    	for(auto it:v)
//    	{
//    		cout<<it<<" ";
//    	}
//    	cout<<endl;
//    	int c=0,res=0;
//    	for(int i=0;i<v.size()-1;i++)
//    	{
//    		if(v[i]==v[i+1])
//    		{
//    			c++;
//    			v[i+1]=v[i+1]-1;
//    		}
//    		else if(v[i]<v[i+1])
//    		{
//    			if(v[i]==0)
//    			{
//    				for(int j=i+1;j<v.size();j++)
//    				{
//    					c+=v[j];
//    				}
//    				break;
//    			}
//    			else
//    			{
//    				c+=(v[i+1]-v[i])+1;
//    			    v[i+1]=v[i]-1;
//    		   }
//    		}

//    	}
//    	cout<<c;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
   
//    string s;
//    cin>>s;
//    map<char,int>mp;
//     vector<int> v;
//    for(int i=0;i<s.size();i++)
//    {
//    	  mp[s[i]]++;
//    }
//    for(auto it:mp)
//    	{
   		
//    		v.push_back(it.second);
//    	}
//    	sort(v.begin(),v.end(),greater<int>());
//    	int c=0,res=0;
//    	for(int i=0;i<v.size()-1;i++)
//    	{
//    		if(v[i]==v[i+1])
//    		{
//    			c++;
   			
//    		}
//    		else 
//    		{
//    			res+=(c*(c+1))/2;
//    		}
//    	}
//    	res+=(c*(c+1))/2;
//    	cout<<res;
//    }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	char ch='4';
// 	int k=(ch);
// 	cout<<k;
// }
// reversiing the equation
// =======================
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	string s;
// 	cin>>s;
// 	vector<char>v;
// 	for(int i=s.size()-1;i>=0;i--)
// 	{
// 		if(s[i]>=48 && s[i]<=57)
// 		{
// 			v.push_back(s[i]);
// 		}
// 		else
// 		{
// 			for(int i=v.size()-1;i>=0;i--)
// 			{
// 				cout<<v[i];
// 			}
// 			v.clear();
// 			cout<<s[i];
// 		}
// 	}
// 	for(int i=v.size()-1;i>=0;i--)
// 			{
// 				cout<<v[i];
// 			}
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	string s;
// 	getline(cin,s);
// 	char x,y;
// 	int c=0;
// 	x=s[0];
// 	for(int i=0;i<s.size();i++)
// 	{
// 		if((s[i]==' ')||(i==s.size()-1))
// 		{
// 			if(i==s.size()-1)
// 			{
// 				y=s[i];
// 			}
// 			else
// 			{
// 				y=s[i-1];
// 			}
// 			cout<<x<<y<<endl;
// 			if((toupper(x)==int('A')||toupper(x)==int('E')||toupper(x)==int('I')||toupper(x)==int('O')||toupper(x)==int('U'))&&((toupper(y)!=int('A')&&toupper(y)!=int('E')&&toupper(y)!=int('I')&&toupper(y)!=int('O')&&toupper(y)!=int('U'))))
// 			{
// 				c++;

// 			}
	
// 			x=s[i+1];
// 		}
// 	}
// 	cout<<c;
// }
// handshakes problem
// ==================
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		if(n==1) cout<<0<<endl;
// 		else
// 		{
// 			cout<<(n*(n-1))/2<<endl;
// 	    }
// 	}
// }
// reverse a string using recursion
// ===============================
// #include<bits/stdc++.h>
// using namespace std;
// void Stringrev(string s,int n)
// {
// 	if(n<0) return;
// 	cout<<s[n];
// 	Stringrev(s,n-1);
// }
// int main()
// {
// 	string s;
// 	cin>>s;
// 	int n=s.size();
// 	Stringrev(s,n-1);
	
// }
// power operation using recursion
// ===============================
// #include <bits/stdc++.h>
// using namespace std;
// int power(int a, int n) {
//     if (n == 0) {
//         return 1;
//     }

//     int temp = power(a, n / 2);
//     int result = temp * temp;

//     if (n % 2 == 1) {
//         result *= a;
//     }

//     return result;
// }

// int main() {
//     int a, n;
//     cin >> a >> n;

//     int result = power(a, n);
//     cout << result <<endl;

//     return 0;
// }
// binarysearch
// ==================
// #include<bits/stdc++.h>
// using namespace std;
// int binarysearch(int *arr,int n, int key)
// {
//     int low=0;
//     int high=n;
//     while(low<=high)
//     {
//         int mid=(low+high)/2;
//         if(arr[mid]==key)
//         {
//             return mid;
//         }
//         else if(key>arr[mid])
//         {
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n,key;
//     cin>>n>>key;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     cout<<binarysearch(arr,n,key);
// }
//negitve numbers in a grid
// ===========================
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     int c=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>arr[i][j];
//             if(arr[i][j]<0)
//             {
//                 c++;
//             }
//         }
//     }
//     cout<<c;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int binarysearch(int *arr,int n, int key)
// {
//     int low=0;
//     int high=n-1;
//     vector<int>v;
//     int f=0;
//     while(low<=high)
//     {
//         int mid=(low+high)/2;
//         //cout<<mid;
//         v.push_back(arr[mid]);
//         if(arr[mid]==key)
//         {
//         	f=1;
//             break;
//         }
//         else if(key>arr[mid])
//         {
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     if(f==0)
//     {
//     	v.push_back(-1);
//     }
//    for(auto it:v)
//    {
//    	cout<<it<<" ";
//    }
// }
// int main()
// {
//     int n,key;
//     cin>>n>>key;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     binarysearch(arr,n,key);
// // }
// pattern
// =======
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<char(65+i);
//         }
//         cout<<endl;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	map<int,int>mp;
// 	for(int i=0;i<n;i++) 
// 		{
// 			cin>>arr[i];
// 			mp[arr[i]]++;
// 		}
// 	int f=0;
// 	for(auto it:mp)
// 	{
// 		if(it.second>=2)
// 		{
// 			f=it.first;
// 			break;
// 		}
// 	}
// 	if(f==0) cout<<-1;
// 	else cout<<f;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n,k;
// 	cin>>n>>k;
// 	int arr[n];
// 	for(int i=0;i<n;i++) cin>>arr[i];
// 	int x=n-(k%n);
//     vector<int>v;
//     for(int i=x;i<n;i++) v.push_back(arr[i]);
//     for(int i=0;i<x;i++) v.push_back(arr[i]);
//     for(auto it:v)
//     {
//     	cout<<it<<" ";
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int rc=0;
//     for(int i=4;i<n;i++)
//     {
//         int c=0;
//         for(int j=2;j<n;j++)
//         {
//             if(i%j==0)
//             {
//                 c++;
//             }
//         }
//         if(c==2) 
//         	{
//         		cout<<i;
//         		rc++;
//         	}
//     }
//     cout<<rc;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n;
    cin>>n;
    long long k,rev=0,r;
    k=n;
    while(k)
    {

        rev=rev*10+(k%10);
        k=k/10;
    }
    cout<<rev<<endl;
    if(rev==n) cout<<"Palindrome";
    else cout<<"not Palindrome";

}