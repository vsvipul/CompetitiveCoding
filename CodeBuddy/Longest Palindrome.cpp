#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int t,i,j,res;
	cin>>t;
	char str[10001];
	char alpha[]="abcdefghijklmnopqrstuvwxyz";
	int count[26];
	while (t--)
	{
		res=0;
		for (i=0;i<26;i++)
			count[i]=0;
		cin>>str;
		int len=strlen(str);
		for (i=0;i<26;i++)
		{
			for (j=0;j<len;j++)
			{
				if (alpha[i]==str[j])
					count[i]++;
			}
		}
		int flag=0;
		for (i=0;i<26;i++)
		{
			if (count[i]!=0)
			{
			if (count[i]%2==0)
				res+=count[i];
			else if (count[i]%2==1){
				res+=(count[i]-1);flag=1;
			}
			}
		}
		if (flag==1)
			res++;
		cout<<res<<endl;
	}
	return 0;
}
