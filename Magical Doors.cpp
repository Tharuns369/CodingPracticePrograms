#include <bits/stdc++.h>
#include <string>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
typedef long long int ll;
int main(){
	fast;
	ll T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		ll i, j, total=0;
		for(i=0; i<s.length(); i++){
			if(s[i]=='0'){
				total++;
				for(j=i; j<s.length(); j++){
					if(s[j]=='1'){
						break;
					}
				}
				i=j;
			}
		}
		if(s[s.length()-1]=='0'){
			cout<<(2*total)-1<<endl;
		}else{
			cout<<(2*total)<<endl;
		}
	}
	return 0;
}
