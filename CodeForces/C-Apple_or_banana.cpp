#include <bits/stdc++.h>
#define vi vector <int>
#define pb push_back
#define ll long long int
#define vll vector <ll>
#define vl vector <ll>
#define fi cin.tie(NULL);ios_base::sync_with_stdio(false)
#define T int t; cin>>t; while(t--)
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int smallestSumSubarr(int arr[], int n)
{
    int min_ending_here = INT_MAX;
    int min_so_far = INT_MAX;
    for (int i=0; i<n; i++)
    {
        if (min_ending_here > 0)
            min_ending_here = arr[i];
        else
            min_ending_here += arr[i];
        min_so_far = min(min_so_far, min_ending_here);            
    }
    return min_so_far;
}

int main()
{
	fi;
	int n,i,ap=0,ba=0;
	cin>>n;
	string str;
	cin>>str;
	int arr[n];
	for (i=0;i<n;i++)
	{
		if (str[i]=='A')
		{
			arr[i]=1;
			ap++;
		}
		else
		{
			arr[i]=-1;
			ba++;
		}
	}
	if (ap==0)
		cout<<0-smallestSumSubarr(arr,n)+1;
	else if (ba==0)
		cout<<maxSubArraySum(arr,n)+1;
	else
		cout<<maxSubArraySum(arr,n)-smallestSumSubarr(arr,n)+1;
    return 0;
}
