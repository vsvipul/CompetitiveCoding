#include <bits/stdc++.h>

#define vi vector <int>
#define mii map <int,int>
#define pb push_back
#define mp make_pair
#define ll long long
#define vll vector <ll>
#define vi vector <int>
#define ii pair<int,int>
#define all(a) (a).begin(),(a).end()
#define FI cin.tie(NULL);ios_base::sync_with_stdio(false)
#define T int t; cin>>t; while(t--)
#define F first
#define S second
#define sz(x) (int)x.size()
#define endl '\n'
#define rep(i,a,b) for (int i=a;i<b;i++)

ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;

#define MOD 1000000007

ll segTree[400025];

void buildtree(int arr[],int left, int right, int index)
{
    if (left==right) //leaf node
    {
        segTree[index]=arr[left];
        return;
    }
    int mid=(left+right)/2;
    buildtree(arr,left,mid,2*index+1);
    buildtree(arr,mid+1,right,2*index+2);
    segTree[index]= segTree[2*index+1] + segTree[2*index+2];
}
 
void updatetree(int uindex, ll newval, int left, int right, int index)
{
    if (left<=uindex && uindex <=right)
    {
        if (left==right) //leaf node
        {
            segTree[index]+=newval;
            return;
        }
        int mid=(left+right)/2;
        updatetree(uindex, newval, left, mid, 2*index+1);
        updatetree(uindex, newval, mid+1, right, 2*index+2);
        segTree[index]=segTree[2*index+1] + segTree[2*index+2];
    }
}

ll query(int qlow, int qhigh, int low, int high, int pos)
{
    if (qlow<=low && qhigh>=high)   //partial 
        return segTree[pos];
    if (qlow>high || qhigh<low)     //no overlap
        return 0;
    int mid=(low+high)/2;
    return query(qlow,qhigh,low,mid,2*pos+1) + query(qlow,qhigh,mid+1,high,2*pos+2);
}

int main()
{
	FI;
	int arr[100006];
	memset(arr,0,sizeof(arr));
	buildtree(arr,0,100005,0);
	char c;
	int n,k,a;
	ll b;
	cin>>n>>k;
	vi v(n);
	rep(i,0,n)
		cin>>v[i];
	while (k--)
	{
		cin>>c;
		if (c=='?')
		{
			cin>>a;
			cout<<v[a]+query(0,v[a],0,100005,0)<<"\n";
		}
		else
		{
			cin>>a>>b;
			updatetree(a,b,0,100005,0);
		}
	}
    return 0;
}
