#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll i,n,m,S,D;
        cin>>n>>m;
        double g=0,ma=0;
        while(n--)
        {
            cin>>S>>D;
            g+=D*(log(S));
        }
        while(m--)
        {
            cin>>S>>D;
            ma+=D*(log(S));
        }
        if(ma>g)
        {
            cout<<"Mahaveer Wins"<<endl;
        }
        else
        {
            cout<<"Geeta Wins"<<endl;
        }
    }
}
