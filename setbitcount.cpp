//SET BIT COUNT FOR A NUMBER
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<__builtin_popcount(n);//returns no of setbits
}