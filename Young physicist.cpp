#include<bits/stdc++.h>
using namespace std;
int main(){
 
int s,sum=0,sum1=0,sum2=0;
cin>>s;
int a[100][100];
for(int i=0;i<s;i++){
for( int j=0;j<3;j++){
 
    cin>>a[i][j];
 
}
sum+=a[i][0];
sum1+=a[i][1];
sum2+=a[i][2];
}
if(sum==0 && sum1==0 && sum2==0)
    cout<<"YES";
else
    cout<<"NO";
 
}
