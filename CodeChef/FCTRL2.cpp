#include <bits/stdc++.h>
#define DIG 200
using namespace std;

int main()
{
    int t,n,m,i,carry,j;
    int arr[DIG];
    cin>>t;
    while (t--)
    {
        cin>>n;
        arr[0]=1;
        m=1;
        for (i=2;i<=n;i++)
        {
            carry=0;
            int temp;
            for (j=0;j<m;j++)
            {
                temp=arr[j]*i+carry;
                arr[j]=temp%10;
                carry=temp/10;
            } 
            while (carry!=0)
            {
                arr[m]=carry%10;
                carry/=10;
                m++;
            }
        }
        for (i=m-1;i>=0;i--)
            cout<<arr[i];
        cout<<endl;
    }    
    return 0;
}
