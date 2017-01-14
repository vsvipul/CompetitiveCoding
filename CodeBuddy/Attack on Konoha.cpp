#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,xmin,xmax,ymin,ymax;
    cin>>t;
    int arrx[t],arry[t];
    for (i=0;i<t;i++)
    {
        cin>>arrx[i]>>arry[i];
    }
    xmax=arrx[0];
    xmin=arrx[0];
    ymax=arry[0];
    ymin=arry[0];
    for (i=1;i<t;i++)
    {
        if (arrx[i]>xmax)
            xmax=arrx[i];
        if (arrx[i]<xmin)
            xmin=arrx[i];
        if (arry[i]>ymax)
            ymax=arry[i];
        if (arry[i]<ymin)
            ymin=arry[i];
    }
    long long int area=(ymax-ymin)*(xmax-xmin);
    if (area==0)
        cout<<"No Chakra required";
    else
        cout<<area;
    return 0;
}
