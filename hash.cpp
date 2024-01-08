#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int c=0,d=0;
    while(x)
    {
        if(x%10>y%10) c++;
        else if(x%10<y%10) d++;
        else continue;
    }
    if(c>d) cout<<"Calvin";
    else if(c==d) cout<<"Tie";
    else cout<<"Django";
}