#include <stdio.h>

int main()
{
	int n,i;
    scanf("%d\n",&n);
    long long int arr[n];
    long long int prod;
    prod=1;
    for (i=0;i<n;i++)
    {
    	scanf("%lld",&arr[i]);
    	prod=((prod*arr[i])%1000000007);
    }
    printf("%lld\n",prod);
    return 0;
}
