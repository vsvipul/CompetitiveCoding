#include <stdio.h>

int main()
{
    int n,i,m,res;
    scanf("%d %d",&n,&m);
    int arr[100000];
    for (i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			if (arr[i]==m)
				res=i+1;
		}
	printf("%d",res);
    return 0;
}
