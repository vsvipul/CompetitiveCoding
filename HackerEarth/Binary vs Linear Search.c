#include <stdio.h>

int main()
{
    int n,q,k,i,count=0;
    scanf("%d",&n);
    int arr[5000];
    for (i=0;i<n;i++)
    	{
    		scanf("%d",&arr[i]);
    	}
    	
    // SORTING	
    int temp;
    for(int k=0;k<n-1;k++) 
    {
        for(int i=0;i<n-k-1;i++) 
        {
            if(arr[i]>arr[i+1]) 
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    
    scanf("%d",&q);
    while (q--)
    {
    	scanf("%d",&k);
    	for (i=0;i<n;i++)
    	{
    		if (arr[i]<=k)
    			count++;
    		else
    			break;
    	}
    	printf("%d\n",count);
    	count=0;
    }
    return 0;
}
