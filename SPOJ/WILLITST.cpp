#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    if ((n & (n-1))==0)
    	cout<<"TAK";
    else
    	cout<<"NIE";
    return 0;
}
