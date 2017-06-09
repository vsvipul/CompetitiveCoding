#include<iostream>
#define ll long long
using namespace std;

bool seg(ll px,ll py,ll qx,ll qy,ll rx,ll ry)
{
    if (qx <= max(px, rx) && qx >= min(px, rx) &&
        qy <= max(py, ry) && qy >= min(py, ry))
       return true;
 
    return false;
}

ll ori(ll px,ll py,ll qx,ll qy,ll rx,ll ry)
{
     ll val = (qy - py) * (rx - qx) -
              (qx - px) * (ry - qy);
 
    if (val == 0) return 0;
    else return 1;
 
}

int check(ll x11,ll y11,ll x12,ll y12,ll x21,ll y21,ll x22,ll y22)
{
    int o1=ori(x11,y11,x12,y12,x21,y21);
    int o2=ori(x11,y11,x12,y12,x22,y22);
    int o3=ori(x21,y21,x22,y22,x11,y11);
    int o4=ori(x21,y21,x22,y22,x12,y12);
    if((y11==y21&&y11==y22&&y11==y12)||(x11==x12&&x11==x21&&x11==x22))
    {
        if (o1 == 0 && seg(x11,y11, x21,y21, x12,y12)) return 1;
        if (o2 == 0 && seg(x11,y11,x22,y22, x12,y12 )) return 1;
        if (o3 == 0 && seg(x21,y21,x11,y11,x22,y22)) return 1;
        if (o4 == 0 && seg(x21,y21,x12,y12,x22,y22)) return 1;
    }
    return 0;
}

int main()
{   ll t,ans,x11,x12,y11,y12,x21,x22,y21,y22;
    cin>>t;
    while(t--)
    {   ans=0;
        cin>>x11>>y11>>x12>>y12;
        cin>>x21>>y21>>x22>>y22;
        ans = check(x11,y11,x12,y12,x21,y21,x22,y22);
        if((x11==x21&&y11==y21)||(x11==x22&&y11==y22)||(x12==x21&&y12==y21)||(x12==x22&&y12==y22))
            ans=1;
        if(ans)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
