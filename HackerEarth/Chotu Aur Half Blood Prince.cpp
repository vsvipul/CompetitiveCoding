#include <bits/stdc++.h>
#define N 100001
using namespace std;

int segTree[4*N]={INT_MIN};

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
    segTree[index]=max(segTree[2*index+1], segTree[2*index+2]);
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
        segTree[index]=max(segTree[2*index+1], segTree[2*index+2]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,pos,newval,i;
    cin>>n>>q;
    int arr[n];
    for (i=0;i<n;i++)
        cin>>arr[i];
    buildtree(arr,0,n-1,0);
    while (q--)
    {
        cin>>pos>>newval;
        pos--;
        updatetree(pos,newval,0,n-1,0);
        cout<<segTree[0]<<"\n";
    }
    return 0;
}
