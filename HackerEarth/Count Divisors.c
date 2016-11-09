#include <stdio.h>

int main()
{
    int l,r,k,i,count;
    count=0;
    scanf("%d%d%d",&l,&r,&k);
    if (l>r)
    	{
    		for (i=r;i<=l;i++)
    			{
    				if (i%k==0)
    					count+=1;
    			}
    	}
    else if (l<r)
    	{
    		for (i=l;i<=r;i++)
    			{
    				if (i%k==0)
    					count+=1;
    			}
    	}
    else if  (l==r)
    	{
    		if (k%l==0)
    			count+=1;
    	}
    printf("%d",count);
    return 0;
}
