#include <bits/stdc++.h>
using namespace std;

int segTree[400005];
bool isprime[10000005];
void sieve()
{
    int i,j;
    memset(isprime,true,sizeof(isprime));
    for (i=2;i<10000005;i++)
    {
        if (isprime[i])
        {
            for (j=2*i;j<10000005;j+=i)
            {
                isprime[j]=false;
            }  
        }  
    }
    isprime[0]=false;
    isprime[1]=false;
}

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
 
void updatetree(int uindex, int newval, int left, int right, int index)
{
    if (left<=uindex && uindex <=right)
    {
        if (left==right) //leaf node
        {
            segTree[index]=newval;
            return;
        }
        int mid=(left+right)/2;
        updatetree(uindex, newval, left, mid, 2*index+1);
        updatetree(uindex, newval, mid+1, right, 2*index+2);
        segTree[index]=segTree[2*index+1] + segTree[2*index+2];
    }
}

int query(int qlow, int qhigh, int low, int high, int pos)
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int n,q,i,a,b,c,temp;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>temp;
        if (isprime[temp])
            arr[i]=1;
        else
            arr[i]=0;
    }
    buildtree(arr,0,n-1,0);
    cin>>q;
    while (q--)
    {
        cin>>a>>b>>c;
        if (a==0)
        {
            b--;
            if (isprime[c])
                updatetree(b,1,0,n-1,0);
            else
                updatetree(b,0,0,n-1,0);
        }
        else if (a==1)
        {
            b--;c--;
            cout<<query(b,c,0,n-1,0)<<"\n";
        }
    }
}
