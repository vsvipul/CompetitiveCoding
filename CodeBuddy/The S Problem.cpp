#include <bits/stdc++.h>
using namespace std;

bool isPrime[101];
void sieve()
{
    memset(isPrime,true,sizeof(isPrime));
    int i,j;
    isPrime[0]=false;
    isPrime[1]=false;
    for (i=2;i<101;i++)
    {
        if (isPrime[i]==true)
        {
            for (j=2*i;j<101;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}

int main()
{
    sieve();
    int t;
    cin>>t;
    while (t--)
    {
        int n,i,j,flag=0;
        cin>>n;
        int arr[20];
        for (i=0;n>0;i++)
        {
            arr[i]=n%2;
            n/=2;
        }
        for (j=0;j<i;j++)
        {
            if ((isPrime[j]==false)&&(arr[j]==1))
            {
                flag=1;break;
            }
        }
        if (flag==1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
