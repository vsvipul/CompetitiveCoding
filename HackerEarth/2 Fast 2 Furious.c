#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int dom[n],brian[n];
    int temp,tempb;
    int maxdom=0,maxbrian=0;
    for (i=0;i<n;i++)
    	scanf("%d",&dom[i]);
    for (i=0;i<n;i++)
    	scanf("%d",&brian[i]);
    for (i=1;i<n;i++)
    	{
    		temp=dom[i]-dom[i-1];
    		if (temp<0)
    			temp*=(-1);
    		if (temp>maxdom)
    			maxdom=temp;
    	}
    for (i=1;i<n;i++)
    	{
    		tempb=brian[i]-brian[i-1];
    		if (tempb<0)
    			tempb*=(-1);
    		if (tempb>maxbrian)
    			maxbrian=tempb;
    	}
    if (maxbrian>maxdom)
    	printf("Brian\n%d",maxbrian);
    else if (maxbrian<maxdom)
    	printf("Dom\n%d",maxdom);
    else if (maxbrian==maxdom)
    	printf("Tie\n%d",maxbrian);
    return 0;
}
