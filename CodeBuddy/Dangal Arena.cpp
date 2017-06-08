#include <bits/stdc++.h>
using namespace std;

double fnc(int n, double x[], double y[])
{
    double area=0.0;
    int i,j=n-1;
    for (i=0;i<n;i++)
    {
        area+=(x[j]+x[i])*(y[j]-y[i]);
        j=i;
    }
    return abs(area/2.0);
}

int main()
{
    int t,n,i;
    cin>>t;
    while (t--)
    {
        cin>>n;
        double x[n],y[n];
        for (i=0;i<n;i++)
            cin>>x[i]>>y[i];
        cout<<fixed<<setprecision(1)<<fnc(n,x,y)<<endl;
    }
    return 0;
}
