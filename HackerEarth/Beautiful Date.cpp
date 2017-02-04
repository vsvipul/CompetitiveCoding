#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	int t,i,j,flag;
	string str;
	int arr[4];
	int arr2[4];
	cin>>t;
	while (t--)
	{
		flag=0;
		cin>>str;
		arr[0]=str[0]-'0';
		arr[1]=str[1]-'0';
		arr[2]=str[3]-'0';
		arr[3]=str[4]-'0';
		arr2[0]=str[6]-'0';
		arr2[1]=str[7]-'0';
		arr2[2]=str[8]-'0';
		arr2[3]=str[9]-'0';
		for (i=0;i<4;i++)
		{
			flag=0;
			for (j=0;j<4;j++)
			{
				if (arr[i]==arr2[j])
				{
					arr2[j]='?';
					flag=1;
					break;
				}
			}
			if (flag==0)
				break;
		}
		if (flag==0)
			cout<<"Unlucky Watson\n";
		else
			cout<<"Lucky Watson\n";
	}	
	return 0;
}
