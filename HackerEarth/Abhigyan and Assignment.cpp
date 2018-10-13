#include <iostream>
#define ll long long
#define FI cin.tie(NULL);ios_base::sync_with_stdio(false)
 
using namespace std;
int main()
{
	int t;
	ll n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lld", &n);
		printf("%d\n", !n);
	}
}
