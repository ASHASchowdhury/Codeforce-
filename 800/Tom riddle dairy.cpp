#include<bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin>>a;
    map<string,bool> vis;
    while(a--){
        string s;
        cin>>s;
        if(vis[s]==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
            vis[s]=1;
        }
    }
}
