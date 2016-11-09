#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d\n",&n);
    char str[n];
    scanf("%s",str);
    int h=0,a=0,c=0,k=0,e=0,r=0,t=0;
    for (i=0;i<n;i++)
    {
    	if (str[i]=='h')
    		h++;
    	else if (str[i]=='a')
    		a++;
    	else if (str[i]=='c')
    		c++;
    	else if (str[i]=='k')
    		k++;
    	else if (str[i]=='e')
    		e++;
    	else if (str[i]=='r')
    		r++;
    	else if (str[i]=='t')
    		t++;
    }
    e/=2;
    a/=2;
    r/=2;
    h/=2;
    int times;
    int arr[7];
    arr[0]=h;
    arr[1]=a;
    arr[2]=c;
    arr[3]=k;
    arr[4]=e;
    arr[5]=r;
    arr[6]=t;
    times=h+a+c+k+e+r+t;
    for (i=0;i<7;i++)
    {
    	if (arr[i]<times)
    		times=arr[i];
    }
    printf("%d",times);
    return 0;
}
