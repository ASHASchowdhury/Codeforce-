#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int m,n;
cin>>m>>n;
 
map<string,string> ipname;
 
for(int i=0;i<m;i++){
    string name,ip;
    cin>>name>>ip;
 
    ipname[ip]=name;
}
for(int i=0;i<n;i++){
    string name,ip;
    cin>>name>>ip;
 
    ip.pop_back();
    cout<<name<<" "<<ip<<"; #"<<ipname[ip]<<endl;
}
 
}
