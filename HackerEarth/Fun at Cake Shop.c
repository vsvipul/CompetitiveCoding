#include <stdio.h>

int main()
{
    int x,i;
    scanf("%d",&x);
    for (i=1;x!=0;i++)
    {
    	x-=i;
    	if (x<=0)
    		{
    			printf("Darshak");
    			break;
    		}
    	x-=i*i;
    	if (x<=0)
    		{
    			printf("Chandan");
    			break;
    		}
    }
    return 0;
}
