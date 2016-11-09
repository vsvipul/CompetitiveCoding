#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,l,count=0;
    scanf("%d",&n);
    char s[100000];
   	for (j=0;j<n;j++)
   		{
			scanf("%s",s);
			l = strlen(s);
			for(i = 0; i < l; i++)
			{
			if(s[i] == 'B')
			{
				if(i-2 >= 0 && s[i-2] == 'W'){
					s[i-2] = 'D';  //D means done ! 
					count++;
				}
				if(i-1 >= 0 && s[i-1] == 'W'){
					s[i-1] = 'D';
					count++;
				}
				if(i+1 < l && s[i+1] == 'W'){
					s[i+1] = 'D';
					count++;
				}
				if(i+2 < l && s[i+2] == 'W'){
					s[i+2] = 'D';
					count++;
				}
			}
   			}
   			printf("%d\n",count);
   			count=0;
   		}
    return 0;
}
