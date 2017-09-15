#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int mark[10];
	int t,i,j;
	cin>>t;
	string str;
	while (t--)
	{
		mark[10];
		int arr[10][10];
		memset(mark,0,sizeof(mark));
		memset(arr,0,sizeof(arr));
		cin>>str;
		for (i=0;i<str.length();i++)
			mark[str[i]-'0']++;
		for (i=0;i<10;i++)
		{
			for (j=0;j<10;j++)
			{
				if (mark[i] && mark[j] && i!=j)
					arr[i][j]=1;
			}
		}
		for (i=0;i<10;i++)
			if (mark[i]>1)
				arr[i][i]=1;
		for (i=0;i<10;i++)
		{
			for (j=0;j<10;j++)
			{
				if (10*i+j>=65 && 10*i+j<=90 && arr[i][j])
					cout<<(char) (10*i+j);
			}
		}
		cout<<endl;
	}
    return 0;
}
