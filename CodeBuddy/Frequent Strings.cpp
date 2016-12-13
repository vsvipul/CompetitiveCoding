#include <iostream>
using namespace std;

int main() {
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
	cout<<dist<<endl;
	int maxpos;
	for (i=0;i<26;i++)
	{
	    maxpos=0;
	    for (j=0;j<26;j++)
	    {
	        if (count[j]>count[maxpos])
	            maxpos=j;
	    }
	   if (count[maxpos]!=0)
	       cout<<alp[maxpos]<<" "<<count[maxpos]<<endl;
	   count[maxpos]=0;
	}
	return 0;
}
