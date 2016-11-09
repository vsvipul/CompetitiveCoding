#include <stdio.h>

long long int gcd(long long int a,long long int b)
{
    if (b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int n;
    scanf("%d",&n);
    long long int a,b,c,i;
    while (n--)
	{
		scanf("%lld %lld",&a,&b);
		c=gcd(a,b);
		a/=c;
		b/=c;
		printf("%lld\n",(a+b));
	}
    return 0;
}
