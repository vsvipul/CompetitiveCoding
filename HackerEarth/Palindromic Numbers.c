#include<stdio.h>

int isPal(int n)
{
	int tmp=n,sum=0;
	while(n>0)
	{
		sum = sum*10 + (n%10);
		n/=10;
	}
	return (sum == tmp);
}

int countPal(int a,int b)
{
	int count=0,num;
	for(num=a;num<=b;num++){
		if(isPal(num)) 
			count++;
	}
	return count;
}

int main() 
{
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&a,&b);
		printf("%d\n",countPal(a,b));
	}
}