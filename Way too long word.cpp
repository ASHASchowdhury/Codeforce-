#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int n;
cin>>n;
string z;
for(int i=1;i<=n;i++){
    cin>>z;
    if(z.length()>10){
        cout<<z[0]<<z.length()-2<<z[z.length()-1]<<endl;}
    else{
        cout<<z<<endl;
    }
}
 
 
return 0;}
