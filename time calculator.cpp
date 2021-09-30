#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int>a;
  vector<int>b;
  string s,ss;
  cin>>s;
  int j;
  while(s!="END"){
    ss="";
    ss+=s[0];
    ss+=s[1];
    j=stoi(ss);
    a.push_back(j);

    ss="";
    ss+=s[3];
    ss+=s[4];
    j=stoi(ss);
    b.push_back(j);
    cin>>s;
  }
  int x=0, y=0;
  for(int i=0; i<a.size(); i++){
    x+=b[i];
    y+=a[i];
  }
  int out1=x/60;
  x%=60;
  cout<<y+out1;
  cout<<":"<<x<<endl;
}
