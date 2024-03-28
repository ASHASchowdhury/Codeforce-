#include<bits/stdc++.h>
using namespace std;
int main(){
 
int a;
cin>>a;
vector<int> shop(a);
 
for(int i=0;i<a;i++){
    cin>>shop[i];
}
sort(shop.begin(),shop.end());
int b;
cin>>b;
vector<int> buget(b);
for(int i=0;i<b;i++){
    cin>>buget[i];
}
for(int i=0;i<b;i++){
    int count=upper_bound(shop.begin(),shop.end(),buget[i])-shop.begin();
    cout<<count<<" ";
}
cout<<endl;
 
}
