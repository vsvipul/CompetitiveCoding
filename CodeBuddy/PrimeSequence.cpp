#include <bits/stdc++.h>
using namespace std;
vector <long long int> v(10000001,0);

void maxprimef()
{
    int i,j;
    for (i=2;i<5000000;i++)
    {
        if (v[i]==0)
        {
            for (j=i;j<10000001;j+=i)
            {
                v[j]=i;
            }
        }
    }
    for (i=2;i<10000001;i++)
    {
        if (v[i]==0)
            v[i]=v[i-1]+i;
        else
            v[i]+=v[i-1];
    }
}

int main()
{
    int t,n,i;
    cin>>t;
    maxprimef();
    while (t--)
    {
        cin>>n;
        cout<<v[n]<<endl;
    }
    return 0;
}

