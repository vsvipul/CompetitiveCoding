#include <stdio.h>

int main()
{
    char str[100001];
    scanf("%s",str);
    int i,x=0,y=0;
    for (i=0;str[i]!='\0';i++)
    	{
    		if (str[i]=='L')
    			x--;
    		else if (str[i]=='D')
    			y--;
    		else if (str[i]=='U')
    			y++;
    		else if (str[i]=='R')
    			x++;
    	}
    printf("%d %d\n",x,y);
    return 0;
}
