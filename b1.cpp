#include<bits/stdc++.h>
using namespace std;
int n,dem=0;
bool checknt(int n)
{
	if(n<2) return false; 
	for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) return false ;
		}
	return true;
}
int main()
{
	do
	{
		cin >>n;
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		if(checknt(i)==true) dem++;
	}
	cout <<dem;
}