#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char s[6];
    float h,m,ha,ma,res;
    while (t--)
    {
        cin>>s;
        h=((s[0]-'0')*10)+(s[1]-'0');
        m=((s[3]-'0')*10)+(s[4]-'0');
        if (h>12) h-=12;
        ma=(m/60)*360;
        ha=((h+(m/60))/12)*360;
        res=ha-ma;
        if (res<0)
            res*=(-1);
        if (res>180)
            res=360-res;
        cout<<fixed<<setprecision(1)<<res<<endl;
    }
    return 0;
}
