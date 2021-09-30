#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
typedef long long int ll;
int main(){
	fast;
	int T;
	cin>>T;
	while(T--){
		int x, y, z;
		cin>>x>>y>>z;
		if(x+z>=y){
			cout<<"YES\n";
		}else if(x+(z*2)>=y){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	
	return 0;
}
