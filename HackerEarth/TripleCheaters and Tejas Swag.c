#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,n,i,l,r,res,resl,resr,p,j,k,c,tmp;
    cin>>t;
    while (t--)
    {
    	res=0;
    	cin>>n>>l>>r;
    	ll arr[n];
    	for (i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	k=r;
    	resr=r;
    	resl=l-1;
    	for (i=0;i<(1<<n);i++)
        {
            tmp=1;c=0;
            for (j=0;j<n;j++)
            {
                if(arr[j]==1)
                {
                    resr=0;
                    tmp=1;
                    break;
                }
                if (i&(1<<j))
                {
                    if (((double) k/tmp)<((double) arr[j]/__gcd(arr[j],tmp)))
                    {
                        tmp=1;
                        break;
                    }
                    tmp*=arr[j]/__gcd(arr[j],tmp);;
                    c++;
                }
            }
            if (tmp != 1)
            {
                if (c%2==1)
                {
                    resr-=k/tmp;
                }
                else
                {
                    resr+=k/tmp;
                }
            }
        }
        k=l-1;
    	for (i=0;i<(1<<n);i++)
        {
            tmp=1;c=0;
            for (j=0;j<n;j++)
            {
                if(arr[j]==1)
                {
                    resl=0;
                    tmp=1;
                    break;
                }
                if (i&(1<<j))
                {
                    if (((double) k/tmp)<((double) arr[j]/__gcd(arr[j],tmp)))
                    {
                        tmp=1;
                        break;
                    }
                    tmp*=arr[j]/__gcd(arr[j],tmp);;
                    c++;
                }
            }
            if (tmp != 1)
            {
                if (c%2==1)
                {
                    resl-=k/tmp;
                }
                else
                {
                    resl+=k/tmp;
                }
            }
        }
        res=r-l+1-(resr-resl);
        cout<<res<<endl;
   	}
    return 0;
}
