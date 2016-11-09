#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,count=0,num,root;
    scanf("%d",&n);
    while (n--)
    {
    	scanf("%d",&num);
    	root=sqrt(num);
    	for (i=1;i<=root;i++)
    	{
    		if (num%i==0)
    			{
    				count+=2;
    			}
    	}
    	if (root*root==num)
    			{
    				count--;
    			}
    	printf("%d\n",count);
    	count=0;
    }
    return 0;
}
