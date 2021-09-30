#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
typedef long long int ll;

int gcd(int a, int b){
    while(b>0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int gcd(vector<int> a){
    int result = a[0];
    for(int i=1; i<a.size(); i++){
        result = gcd(result, a[i]);
    }
    return result;
}

int lcm(int a, int b){
    return ((a*b)/gcd(a, b));
}

int lcm(vector<int> a){
    int result = a[0];
    for(int i=1; i<a.size(); i++){
        result = lcm(result, a[i]);
    }
    return result;
}

int main(){
    fast;
        int n, m, i, j, count=0;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(m);
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        for(i=0; i<m; i++){
            cin>>b[i];
        }
        
        //find lcm of elements of a
        //find gcd of elements of b
        //Count the number of multiples of LCM that evenly divides the GCD.
        
        int l = lcm(a);
        int g = gcd(b);
        int multiple = 0;
        // for(i=l,j=2; i<=g; i=l*j, j++){
        //     if(g%i==0){
        //         count++;
        //     }
        // }
        while(multiple<=g){
            multiple += l;          //multiple will be the multiples of lcm
            if(g%multiple == 0){
                count++;
            }
        }
        cout<<count<<endl;
    return 0;
}

