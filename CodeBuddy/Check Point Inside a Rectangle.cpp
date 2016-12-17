#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x,y;
    cin>>a>>b>>c>>d>>x>>y;
    int xmax,xmin,ymax,ymin;
    if (a>c)
    {
        xmax=a;
        xmin=c;
    }
    else
    {
        xmax=c;
        xmin=a;
    }
    if (b>d)
    {
        ymax=b;
        ymin=d;
    }
    else
    {
        ymax=d;
        ymin=b;
    }
    if (x>xmin&&x<xmax&&y>ymin&&y<ymax)
        cout<<"IN";
    else if (((x==xmin||x==xmax)&&(y>=ymin&&y<=ymax))||((x>=xmin&&x<=xmax)&&(y==ymin||y==ymax))||((x==xmin||x==xmax)&&(y==ymin||y==ymax)))
        cout<<"ON";
    else
        cout<<"OUT";
    return 0;
}
