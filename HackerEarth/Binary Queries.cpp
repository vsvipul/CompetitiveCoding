#include <iostream>
using namespace std;

int main()
{
    int n,q,a,b,l,r,i;
    scanf("%d%d",&n,&q);
    int arr[n];
    for (i=0;i<n;i++)
    	scanf("%d",&arr[i]);
    while (q--)
    {
    	scanf("%d",&a);
    	if (a==0)
    	{
    		scanf("%d%d",&l,&r);
    		if (arr[r-1]%2==0)
    			printf("EVEN\n");
    		else
    			printf("ODD\n");
    	}
    	else if (a==1)
    	{
    		scanf("%d",&b);
    		if (arr[b-1]==1)
    			arr[b-1]=0;
    		else if (arr[b-1]==0)
    			arr[b-1]=1;
    	}
    }
    return 0;
}
