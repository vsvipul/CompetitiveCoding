#include <stdio.h>
#include <string.h>
int main()
{
    char str1[101];
    scanf("%s",str1);
    int length,flag=0,i;
    length=strlen(str1);
    for (i=0;i<length;i++)
     {
     	if (str1[i]!=str1[length-i-1])
     		flag=1;
     		break;
     }
   if (flag==1)
    	printf("NO\n");
   else if (flag==0)
   		printf("YES\n");
    return 0;
}
