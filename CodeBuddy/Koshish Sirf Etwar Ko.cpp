#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool leap(ll y)
{
	if (y%4!=0) return false;
	else if (y%100!=0) return true;
	else if (y%400!=0) return false;
	else	return true;
}

int month(ll x,bool leap){
	if(x==2 && leap==true){
		return 29;
	}
	else if(x==2 && leap==false){
		return 28;
	}
	else if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12){
		return 31;
	}
	else{
		return 30;
	}
}

ll days(ll d,ll m,ll y)
{
		if (y<1990) return 0;
		ll ad=0,temp,i,j,flag=0;
		temp=1;
		for(i=1990;i<=y-1;i++)
		{
			while(temp<=12)
			{
				ad+=month(temp,leap(i));
				temp++;
			}
			flag=1;
			temp=1;
		}
		if(flag==1)
		{
			for(i=1;i<m;i++)
				ad+=month(i,leap(y));
		}	
		else
		{
			for(i=temp;i<m;i++)
				ad+=month(i,leap(y));
		}
		ad+=d;
		return ad/7;
}

int main(){
	ll t,flag,d,m,y;
	cin>>t;
	while(t--)
	{
		flag=0;
		scanf("%lld-%lld-%lld",&d,&m,&y);
		if(m==1 && d==1)
		{
			m=12;d=31;y--;
		}
		else if(d==1)
		{
			d=month(m-1,leap(y));
			m--;
		}
		else
			d--;
		ll ans1=days(d,m,y);
		scanf("%lld-%lld-%lld",&d,&m,&y);
		ll ans2=days(d,m,y);
		cout<<ans2-ans1<<endl;
	}
}
