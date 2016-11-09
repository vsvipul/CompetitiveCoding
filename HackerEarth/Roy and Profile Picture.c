#include <stdio.h>

int main()
{
    int i,l,n,w,h;
    scanf("%d",&l);
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
    	scanf("%d %d",&w,&h);
    	if ((w<l)||(h<l))
    		printf("UPLOAD ANOTHER\n");
    	else
    		{
    			if (w==h)
    				printf("ACCEPTED\n");
    			else
    				printf("CROP IT\n");
    		}
    	
    }
    
    return 0;
}
