
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int a,b,x[100000],count=0;
 
cin>>a>>b;
for( int i= 0;i<a; i++){
    cin>>x[i];
}
for(int i=0 ;i< a;i++){
if(x[i]>=x[b-1] && x[i]>0){
    count++;
}}
cout<<count<<endl;
return 0;
}
