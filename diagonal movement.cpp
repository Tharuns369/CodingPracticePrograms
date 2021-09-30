#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
typedef long long int ll;
void check(){
	int x, y, total;
	cin>>x>>y;
	total = x+y;
	if(total%2==0){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
}
int main(){
	fast;
	int T;
	cin>>T;
	while(T--){
		check();
	}
	
	return 0;
}
