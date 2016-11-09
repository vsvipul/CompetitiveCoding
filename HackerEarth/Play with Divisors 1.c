#include <stdio.h>

int main()
{
    int n,i,count=0,num;
    scanf("%d",&n);
    while (n--)
    {
    	scanf("%d",&num);
    	for (i=1;i<=num;i++)
    	{
    		if (num%i==0)
    			count++;
    	}
    	printf("%d\n",count);
    	count=0;
    }
    return 0;
}
