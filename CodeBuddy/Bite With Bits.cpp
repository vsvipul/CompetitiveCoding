#include <bits/stdc++.h>
using namespace std;

int main()
{
    int setbits[10001]={0};
    int bitcount,i,temp;
    for  (i=0;i<10001;i++)
    {
        bitcount=0;
        if (i==0)
            setbits[i]=0;
        else
        {
            temp=i;
            while (temp>0)
            {
                if (temp%2!=0)
                    bitcount++;
                temp/=2;
            }
            setbits[i]=bitcount;
        }
    }
    int n;
    cin>>n;
    for (i=1;i<10001;i++)
    {
        if (setbits[i]==n)
            cout<<i<<endl;
    }
    return 0;
}
