#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,stamps,n,temp;
    cin>>t;
    for (j=1;j<=t;j++)
    {
        cin>>stamps>>n;
        vector <int> v;
        for (i=0;i<n;i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end(), greater<int>());
        for (i=1;i<n;i++)
        {
            v[i]+=v[i-1];
        }
        vector <int>::iterator it;
        it=lower_bound(v.begin(),v.end(),stamps);
        cout<<"Scenario #"<<j<<":\n";
        if (it==v.end())
            cout<<"impossible\n\n";
        else
            cout<<it-v.begin()+1<<"\n\n";
    }
    return 0;
}
