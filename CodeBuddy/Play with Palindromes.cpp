#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int i,n;
        cin>>n;
        int arr[n];
        for (i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int flag=0;
        for(i=0;i<=n/2;i++)
        {
            if (arr[i]!=arr[n-i-1])
                flag=1;
        }
        if (flag==1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
	return 0;
}
