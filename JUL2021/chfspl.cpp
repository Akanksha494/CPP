#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	ll t,a,b,c;
	cin>>t;

	while(t--){
		cin>>a>>b>>c;
		cout<<max((a+b),max((b+c),(c+a)))<<endl;

	}
	return 0;
}