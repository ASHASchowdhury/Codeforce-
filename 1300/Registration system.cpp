#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int a;
    cin>>a;
    map<string,int> vis;
    while(a--){
        string s;
        cin>>s;
        if(vis[s]==0)
            cout<<"OK\n";
 
 
        else
            cout<<s<<vis[s]<<endl;
 
         vis[s]++;
    }
}
