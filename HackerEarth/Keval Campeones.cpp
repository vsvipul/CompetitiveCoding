#include <bits/stdc++.h>
using namespace std;

bool comp(vector <int>& a, vector <int>& b)
{
	if (a[0]==b[0])
	{
		if (a[1]==b[1])
		{
			if (a[2]==b[2])
			{
				if (a[3]==b[3])
				{
					if (a[4]==b[4])
						return a[5]<b[5];
					else
						return a[4]<b[4];
				}
				else
					return a[3]>b[3];
			}
			else
				return a[2]>b[2];
		}
		else
			return a[1]<b[1];
	}
	return a[0]>b[0];
}

int main()
{
	map <string, vector <int> > m;
	map <string, vector <int> >::iterator it;
	string s;
	int i,j;
	while (cin>>s)
	{
		string n1="",n2="";
		int i=0,s1=0,s2=0;
		while (s[i]!='(')
			n1+=s[i++];
		i++;
		while (s[i]!='-')
			s1=(s1*10)+(s[i++]-'0');
		i++;
		while (s[i]!=')')
			s2=(s2*10)+(s[i++]-'0');
		i++;
		while (i<s.length())
			n2+=s[i++];
		vector <int> v(7,0);
		if (s1>s2)
			v[0]=3;
		else if (s1==s2)
			v[0]=1;
		v[1]=1;
		v[2]=s1-s2;
		v[3]=s1;
		v[4]=s2;
		if (m.find(n1)==m.end())
			m[n1]=v;
		else
			for (i=0;i<5;i++)
				m[n1][i]+=v[i];
		if (s2>s1)
			v[0]=3;
		else if (s1==s2)
			v[0]=1;
		else
			v[0]=0;
		v[2]=s2-s1;
		v[3]=s2;
		v[4]=s1;
		if (m.find(n2)==m.end())
			m[n2]=v;
		else
			for (i=0;i<5;i++)
				m[n2][i]+=v[i];
	}
	vector < vector <int> > u (m.size(), vector <int> (7,0));
	vector <string> str(m.size(),"");
	it=m.begin();
	for (i=0;i<m.size();i++)
	{
		str[i]=it->first;
		for (j=0;j<5;j++)
			u[i][j]=it->second[j];
		u[i][5]=i;
		it++;
	}
	sort(u.begin(), u.end(), comp);
	for (i=0;i<u.size();i++)
		cout<<i+1<<". "<<str[u[i][5]]<<" - "<<u[i][0]<<"\n";
}
