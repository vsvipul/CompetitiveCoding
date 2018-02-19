#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	while (n--)
	{
		int x,t=5,res=0;
		while (t--)
		{
			cin>>x;
			if (x)
				res++;
		}
		switch (res)
		{
			case 0: printf("Beginner\n");break;
			case 1: printf("Junior Developer\n");break;
			case 2: printf("Middle Developer\n");break;
			case 3: printf("Senior Developer\n");break;
			case 4: printf("Hacker\n");break;
			case 5: printf("Jeff Dean\n");break;
		}
	}
	return 0;
} 
