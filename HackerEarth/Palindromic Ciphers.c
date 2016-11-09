#include <stdio.h>
#include <string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char str[11];
    int len,flag=0,temp;
    long long int res=1;
    while (n--)
    {
    	scanf("%s",str);
    	len=strlen(str);
    	for (i=0;i<(len/2);i++)
    	{
    		if (str[i]!=str[len-i-1])
    			flag=1;
    	}
    	if (flag==0)
    		printf("Palindrome\n");
    	else
    	{
    		for (i=0;i<len;i++)
    		{
    			temp= (((int) str[i])-96);
    			res*=temp;
    		}
    		printf("%lld\n",res);
    	}
    	flag=0;
    	res=1;
    }
    return 0;
}
