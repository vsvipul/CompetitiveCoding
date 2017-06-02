#include <bits/stdc++.h>
using namespace std;

int segmaxTree[400005];
int segminTree[400005];

void buildtree(int arr[],int left, int right, int index)
{
    if (left==right) //leaf node
    {
        segmaxTree[index]=arr[left];
        segminTree[index]=arr[left];
        return;
    }
    int mid=(left+right)/2;
    buildtree(arr,left,mid,2*index+1);
    buildtree(arr,mid+1,right,2*index+2);
    segmaxTree[index]= max(segmaxTree[2*index+1], segmaxTree[2*index+2]);
    segminTree[index]= min(segminTree[2*index+1], segminTree[2*index+2]);
}
 
void updatetree(int uindex, int newval, int left, int right, int index)
{
    if (left<=uindex && uindex <=right)
    {
        if (left==right) //leaf node
        {
            segminTree[index]=newval;
            segmaxTree[index]=newval;
            return;
        }
        int mid=(left+right)/2;
        updatetree(uindex, newval, left, mid, 2*index+1);
        updatetree(uindex, newval, mid+1, right, 2*index+2);
        segmaxTree[index]= max(segmaxTree[2*index+1], segmaxTree[2*index+2]);
        segminTree[index]= min(segminTree[2*index+1], segminTree[2*index+2]);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,i,a,b,c;
    cin>>n>>q;
    int arr[n];
    for (i=0;i<n;i++)
        cin>>arr[i];
    buildtree(arr,0,n-1,0);
    long long int sum=0;
    while (q--)
    {
        cin>>a;
        if (a==1)
        {
            cin>>b>>c;
            b--;
            updatetree(b,c,0,n-1,0);
        }
        else if (a==2)
        {
            sum+=segmaxTree[0];
        }
        else if (a==3)
        {
            sum+=segminTree[0];
        }
    }
    cout<<sum;
}
