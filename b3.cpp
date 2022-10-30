#include<bits/stdc++.h>
using namespace std;

void nhap(int a[100][100], int m, int n) 
{
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>a[i][j];		
}
void xuat(int a[100][100], int m,int n) 
{
	for(int i=0; i<m; i++) 
	{
		for(int j=0; j<n; j++)
			cout<<a[i][j];
	}
}
void MTCV(int a[100][100], int m,int n) 
{
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
			cout<<a[i][j] << " ";
		cout <<endl;
	}
	cout <<endl;
}
main() {
	int a[100][100],b[100][100],tich[100][100];
	int m,n,p,q;
	cin >>m >>n >>p >>q;
	nhap(a,m,n);
	nhap(b,p,q);
	if (n==p)
	{
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<q;j++)
			{
				tich[i][j]=0;
				for(int tg=0;tg<n;++tg)	tich[i][j] += (a[i][tg]*b[tg][j]);
			
			cout <<tich[i][j] << " ";	
			}
			cout <<endl;
		}
	}
	cout <<endl;
	MTCV(a,m,n);
	cout <<endl;
	MTCV(b,p,q);
	cout <<endl;
}