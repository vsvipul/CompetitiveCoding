#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long int arr[10000001];
long long int fact[10000001];

int main() {
    fact[0]=fact[1]=1;
    arr[1]=1;
    long long int t,n,i;
    cin>>t;
    for (i=2;i<10000001;i++)
    {
        fact[i]=((fact[i-1]%MOD)*(i%MOD))%MOD;
        arr[i]=((arr[i-1]%MOD)*(fact[i]%MOD))%MOD;
    }
    while (t--)
    {
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}
