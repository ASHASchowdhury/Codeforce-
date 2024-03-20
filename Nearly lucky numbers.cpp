
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int count=0;
string a;
cin>>a;
 
for(int i=0;i<sizeof(a);i++){
    if(a[i]=='4'|| a[i]=='7')
        count++;
}
    if(count==4 || count ==7)
        cout<<"YES";
    else cout<<"NO";
 return 0;}
