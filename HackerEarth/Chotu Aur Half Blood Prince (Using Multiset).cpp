#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    multiset <int> s;
    multiset <int>:: iterator it;
    int n,q,pos,newval,i;
    cin>>n>>q;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    while (q--)
    {
        cin>>pos>>newval;
        it=s.find(arr[pos-1]);
        s.erase(it);
        s.insert(newval);
        arr[pos-1]=newval;
        it=s.end();
        it--;
        cout<<*it<<"\n";
    }
    return 0;
}
