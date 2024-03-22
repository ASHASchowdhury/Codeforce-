#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
string x,x1;
cin>>x;
 
for(int i=0;i<x.size();i++){
    x[i]=tolower(x[i]);
 
if(x[i]=='a' || x[i]=='o' || x[i]=='y' || x[i]=='e' || x[i]=='u' || x[i]=='i'){
continue;}
 
else{
    cout<<"."<<x[i];
}}
return 0;
}
