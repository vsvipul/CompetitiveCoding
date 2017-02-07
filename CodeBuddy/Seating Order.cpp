#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,m,k;
    int temp,i,flag,count,res=0;
    cin>>n>>m>>k;
    if (n>m*k) n=m*k;
    int max[n];
    for (i=0;i<m;i++)
        max[i]=k;
    int point[n];
    for (i=0;i<m-1;i++)
        point[i]=i+1;
    point[m-1]=0;
    int arr[m];
    while (n--)
    {
        cin>>temp;
        temp--;
        flag=0;
        for (i=0;max[temp]==0;i++)
        {
            flag=1;
    		arr[i]=temp;
            temp=point[temp];
        }
        while (i>0)
        {
        	i--;
        	point[arr[i]]=temp;
        }
        max[temp]--;
        if (flag==0)
        {
            res++;
        }
    }
    cout<<res<<'\n';
    return 0;
}
