#include<bits/stdc++.h>
using namespace std;
int main(){
string z="hello";
string x;
cin>>x;
int a=0,b=0;
 
for(int i=0;i<x.size();i++){
    if(x[i]==z[a]){
        a++;
        b++;
    }
}
if(b==5){
    cout<<"YES";
}
else cout<<"NO";
}
