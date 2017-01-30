#include <bits/stdc++.h>
using namespace std;

struct point
{
	int x;
	int y;
};

bool cmp(struct point a,struct point b)
{
    if(a.x!=b.x)
    {
        return (a.x<b.x);
    }
    else
    {
        return (a.y>b.y);
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
    int t,n,i;
    double dist;
    cin>>t;
    while(t--)
    {
        dist=0;
        cin>>n;
        struct point arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i].x>>arr[i].y;
        }
        sort(arr,arr+n,cmp);
        for(i=1;i<n;i++)
        {
            dist+=(double)(sqrt(((arr[i].x-arr[i-1].x)*(arr[i].x-arr[i-1].x))+((arr[i].y-arr[i-1].y)*(arr[i].y-arr[i-1].y))));
        }
        cout<<fixed<<setprecision(2)<<dist<<'\n';
    }

}
