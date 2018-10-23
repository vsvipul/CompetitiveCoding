#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long Int;
#define fl(i,x,y) for(int i=x; i<y; i++)
#define vi vector<int>
#define vvi vector< vi >
#define vl vector<Int>
#define vvl vector< vl >
#define si_d set<int, greater<int> >
#define sl_d set<Int, greater<Int> >
#define mii map<int,int>
#define mll map<Int,Int>
#define pb push_back
#define sortAsc(v) sort(v.begin(),v.end())
#define sortDesc(v) sort(v.rbegin(),v.rend())
#define F first
#define S second
#define foreach(i,a) for(__typeof((a).begin()) i = (a).begin(); i != (a).end(); ++i)
#define getMax(v) *(max_element(v.begin(), v.end()))
#define getMin(v) *(min_element(v.begin(), v.end()))
Int MOD = 1000000007;
Int min(Int a, Int b){return (a<b?a:b);}
Int max(Int a, Int b){return (a>b?a:b);}
bool isPrime(Int a);



int main()
{ _
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        bool correct = true;
        for(int i=0; i<len && correct; ++i)
        {
            if(s[i]=='.' || s[i]=='x')
                continue;
            int val = (int)(s[i]-'0');
            for(int k = i-1, l = val; k>=0 && l>0; --k, --l)
            {
                if(s[k]!='.')
                {
                    correct=false;
                    break;
                }
                else
                {
                    s[k] = 'x';
                }
            }
            for(int k = i+1, l = val; k<len && l>0 && correct; ++k, --l)
            {
                if(s[k]!='.')
                {
                    correct=false;
                    break;
                }
                else
                {
                    s[k] = 'x';
                }
            }
        }
        if(!correct)
            cout << "unsafe\n";
        else
            cout << "safe\n";
    }
    cout << endl;
}

bool isPrime(Int a)
{
    for(Int i=2; i*i<=a; ++i)
        if(a%i==0) return false;
    return true;
}
