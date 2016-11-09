#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		int arr[100001];
		scanf("%d %d",&n,&k);
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		k%=n;
		for(int i=0;i<n;i++)
			printf("%d ",arr[(i+(n-k))%n]);
		printf("\n");
	}
	return 0;
}