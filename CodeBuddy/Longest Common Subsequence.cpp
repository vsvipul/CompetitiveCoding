#include <bits/stdc++.h>
using namespace std;

int fnc(string a, string b)
{
	int al=a.length();
	int bl=b.length();
	int i,j,arr[al+1][bl+1];
	for (i=0;i<al+1;i++)
	{
		for (j=0;j<bl+1;j++)
			arr[i][j]=0;
	}
	for (i=1;i<al+1;i++)
	{
		for (j=1;j<bl+1;j++)
		{
			if (a[i-1]==b[j-1])
				arr[i][j]=arr[i-1][j-1]+1;
			else
				arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
		}
	}
	return arr[al][bl];
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    string a,b;
    cin>>t;
    while (t--)
    {
    	 cin>>a>>b;
    	 cout<<fnc(a,b)<<endl;
    }
    return 0;
}
