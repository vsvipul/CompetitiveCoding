#include <bits/stdc++.h>
#define ll long long int
using namespace std;

double volume(int a, int b, int c, int d, int e, int f)
{
	int arr[]={0,1,2,3,4};
	ll det=0;
	int j,k;
	ll matrix[5][5]={{0,1,1,1,1},
			{1,0,a*a,b*b,c*c},
			{1,a*a,0,d*d,e*e},
			{1,b*b,d*d,0,f*f},
			{1,c*c,e*e,f*f,0}};
	while (next_permutation(arr,arr+5))
	{
		int test=1;
		for (j=0; j<4; j++)
			for (k=j+1; k<5; k++)
				test*=arr[j]-arr[k];
		ll product=1;
		for (j=0; j<5; j++)
			product*=matrix[j][arr[j]];
		if (test>0)
			det+=product;
		else
			det-=product;
	}
	double volume=sqrt((double)det/288.0);
	return volume;
}

double area(int a, int b, int c)
{
	double s=(a+b+c)/2.0;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() {
	int t,wx,wy,wz,xy,xz,yz;
	double res;
	cin>>t;
	while (t--)
	{
		cin>>wx>>wy>>wz>>xy>>xz>>yz;
		if (wx==0 || wy==0 || wz==0 || xy==0 || xz==0 || yz==0)
			res=0;
		else
			res=(3*volume(wx,wy,wz,xy,xz,yz))/(area(xy,xz,yz)+area(wx,wy,xy)+area(wx,wz,xz)+area(wy,wz,yz));
		cout<<fixed<<setprecision(4)<<res<<"\n";
	}
	return 0;
}
