#include <iostream>
using namespace std;

int main()
{
    int n,m,a,b,q;
    cin>>n>>m;
    int arr[n+1][n+1];
    while (m--)
    {
        cin>>a>>b;
        arr[a][b]=1;
        arr[b][a]=1;
    }
    cin>>q;
    while (q--)
    {
        cin>>a>>b;
        if (arr[a][b]==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
