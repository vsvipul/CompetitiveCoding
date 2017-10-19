#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout<<fixed<<setprecision(1);
    double a,b,c,d,e;
    cin>>a>>b>>c>>d;
    double avg=((2*a)+(3*b)+(4*c)+(1*d))/(10.0);
    cout<<"Media: "<<avg<<"\n";
    if (avg>=7.0) cout<<"Aluno aprovado.\n";
    else if (avg<5.0) cout<<"Aluno reprovado.\n";
    else 
    {
    	cout<<"Aluno em exame.\n";
    	cin>>e;
    	cout<<"Nota do exame: "<<e<<endl;
    	avg=(avg+e)/2.0;
    	if (avg>=5.0)
    		cout<<"Aluno aprovado.\n";
    	else
    		cout<<"Aluno reprovado.\n";
    	cout<<"Media final: "<<avg<<"\n";
    }
    return 0;
}
