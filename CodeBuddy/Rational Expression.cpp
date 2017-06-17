#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,a,b,c,d,e,num,den,tmp;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%*[^0123456789]%d%*[^0123456789]%d%*[^0123456789]%d%*[^0123456789]%d%*[^0123456789]%d",&a,&b,&c,&d,&e);
		num=(a*d+c*b)/__gcd(b,d);
		den=((b*d)/__gcd(b,d))*e;
		tmp=__gcd(num,den);
		num/=tmp;
		den/=tmp;
		printf("%d %d\n",num,den);
	}
  return 0;
}
