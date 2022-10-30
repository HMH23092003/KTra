#include <bits/stdc++.h>
using namespace std;
int n,maxcs=0;
int maxchuso(int n)
{
    if (n == 0) return 0;
    while (n > 0) 
	{
        int tg = n % 10;
        n /= 10;
        if (tg >= maxcs) maxcs = tg;
    }
    return maxcs;
}
int main()
{
    do
    {
	   cin >> n;
	}
    while(n<=0);
    cout <<maxchuso(n);
}