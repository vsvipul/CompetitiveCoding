#include <bits/stdc++.h>
using namespace std;

int segtree[400005];

void build(int arr[], int left, int right, int index)
{
	if (left==right)
	{
		if (arr[left]%2)
			segtree[index]=1;
		return;
	}
	int mid=(left+right)/2;
	build(arr,left,mid,2*index+1);
	build(arr,mid+1,right,2*index+2);
	segtree[index]=segtree[2*index+1]+segtree[2*index+2];
}

void update(int uindex, int newval, int left, int right, int index)
{
	if (left<=uindex && uindex<=right)
	{
		if (left==right)
		{
			if (newval%2)
				segtree[index]=1;
			else
				segtree[index]=0;
			return;
		}
		int mid=(left+right)/2;
		update(uindex, newval, left, mid, 2*index+1);
		update(uindex, newval, mid+1, right, 2*index+2);
		segtree[index]=segtree[2*index+1]+segtree[2*index+2];
	}
}

int query(int qleft, int qright, int left, int right, int index)
{
	if (qleft<=left && qright>=right)
		return segtree[index];
	if (qleft>right || qright<left)
		return 0;
	int mid=(left+right)/2;
	return query(qleft, qright, left, mid, 2*index+1) + query(qleft, qright, mid+1, right, 2*index+2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,q,a,b,c,i;
	cin>>n;
	int arr[n];
	for (i=0;i<n;i++)
		cin>>arr[i];
	build(arr,0,n-1,0);
	cin>>q;
	while (q--)
	{
		cin>>a>>b>>c;
		if (a==0)
		{
			b--;
			update(b,c,0,n-1,0);
		}
		else if (a==1)
		{
			b--;c--;
			cout<<c-b+1-query(b,c,0,n-1,0)<<endl;
		}
		else if (a==2)
		{
			b--;c--;
			cout<<query(b,c,0,n-1,0)<<endl;
		}
	}
	return 0;
}
