#include <stdio.h>

int main()
{
    int t,n,i;
    scanf("%d",&t);
    long long int arr[86];
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;
    arr[4]=1;
    for (i=5;i<86;i++)
    {
    	arr[i]=(arr[i-1]+arr[i-3]+arr[i-5]);
    }
    while (t--)
    {
    	scanf("%d",&n);
    	printf("%lld\n",arr[n]);
    }
    return 0;
}
