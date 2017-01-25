#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,x;
	scanf("%d",&t);
	while (t--)
	{
		set <long long int> s;
		set <long long int>:: iterator it;
		scanf("%d",&n);
		while (n--)
		{
			scanf("%d",&x);
			it=s.find(x);
			if (it!=s.end())
				printf("YES\n");
			else
			{
				printf("NO\n");
			    s.insert(x);
			}
		}
	}
    return 0;
}
