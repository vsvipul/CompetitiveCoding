#include <stdio.h>

int main()
{
    char s[101];
    gets(s);
    int i,j,k,l,flag=0;
    for (i=0;s[i]!='\0';i++)
    	{
    		if (s[i]=='l')
    			{
    				for (j=i;s[j]!='\0';j++)
    					{
    						if (s[j]=='o')
    							{
    								for (k=j;s[k]!='\0';k++)
    									{
    										if (s[k]=='v')
    											{
    												for (l=k;s[l]!='\0';l++)
    													{
    														if (s[l]=='e')
    															flag=1;
    													}
    											}
    									}
    							}
    					}
    			}
    	}
    if (flag==1)
    	printf("I love you, too!");
    else 
    	printf("Let us breakup!");
    return 0;
}
