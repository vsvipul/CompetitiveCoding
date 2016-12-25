#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
        cin>>arr[i];
    int count=0,max=0;
    bool pos=true;
    for (i=0;i<n;i++)
    {

        if (arr[i]>0)
        {
            count++;
        }
        else if (arr[i]<0)
        {
            count++;
            pos=!pos;
        }
        else if (arr[i]==0)
        {
            count=0;
            pos=true;
        }
        if ((count>max)&&(pos==true))
                max=count;
        else if ((count>max)&&(pos==false))
                max=count-1;
    }
    cout<<max;
    return 0;
}
