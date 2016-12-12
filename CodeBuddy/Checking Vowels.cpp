#include <iostream>
using namespace std;

int main() {
	char c;
	cin>>c;
	switch (c)
	{
	case 'a' :  
	case 'e' :
	case 'i' :
	case 'o' :
	case 'u' :
	case 'A' :
	case 'E' :
	case 'I' :
	case 'O' :
	case 'U' : cout<<"YES";break;
	default :  cout<<"NO";
	}
	return 0;
}
