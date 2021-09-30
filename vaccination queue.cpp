#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
typedef long long int ll;
int main(){
	fast;
	int T;
	cin>>T;
	while(T--){
		int n, p, x, y, i, time=0, c=0, a=0;
		cin>>n>>p>>x>>y;
		int arr[n];
		for(i=0; i<n; i++){
			cin>>arr[i];
		}
		for(i=0; i<p; i++){
			if(arr[i]==0){
				c++;
			}else if(arr[i]==1){
				a++;
			}
		}
		time = (c*x)+(a*y);
		cout<<time<<endl;
	}
	
	return 0;
}
