#include<bits/stdc++.h>
using namespace std;
int main(){
 
int w,k,n;
cin>>k>>n>>w;
int sum=0,lf=0;
 
for(int i=1;i<=w;i++){
    sum+=(i*k);
}
    lf=sum-n;
    if(lf>0)
    cout<<lf;
else cout<<"0";
 
}
