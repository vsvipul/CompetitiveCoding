#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string res="";
        map <ll,ll> m;
        map <ll,ll> :: iterator it;
        ll k,flag=0;
        cin>>k;
        string s;
        cin>>s;
        ll num=s.size();
        for(int i=0;i<num;i++)
        {
            m[s[i]]++;
        }
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second % k !=0)
            {
                flag++;
                break;
            }
            else
            {
                it->second/=k;
            }
        }
        if(flag!=0)
        {
            cout<<"Sorry Mahaveer";
        }
        else
        {
            for(it=m.begin();it!=m.end();it++)
            {
                for(int j=0;j<it->second;j++)
                {
                    res+=it->first;
                }
            }
        }
        while(k--){
            cout<<res;
        }
        cout<<"\n";
    }
}
