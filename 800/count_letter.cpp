#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;

vector<int> st(26,0);

for(char c: s){
    st[c-'a']++;
}
for(int i=0;i<26;i++){
    if(st[i]>0){
        cout<<char('a'+i)<<" : "<<st[i]<<endl;
    }
}
return 0;
}
