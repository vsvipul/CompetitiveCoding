#include <bits/stdc++.h>
using namespace std;

int main() 
{
	std::ios::sync_with_stdio(false);
	char str[100000];
	int flag;
	char alp[]="abcdefghijklmnopqrstuvwxyz";
	int count[26]={0};
	cin>>str;
	int i,j;
	int dist=0;
	for (i=0;alp[i]!='\0';i++)
	{
	    flag=0;
	    for (j=0;str[j]!='\0';j++)
	    {
	        if (alp[i]==str[j])
	        {
	            count[i]++;
	            flag=1;
	        }
	    }
	    if (flag==1)
	        dist++;
	}
	int res=0;
	for (i=0;i<26;i++)
	{
		if (count[i]!=0)
			res+=abs(1-count[i]);
	}
	cout<<res;
	return 0;
}
