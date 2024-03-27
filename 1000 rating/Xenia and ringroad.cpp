
#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m,sum=0;
cin>>n>>m;
int ar[m];

for(int i=0;i<m;i++){
    cin>>ar[i];
}
long long int count1=ar[0]-1;
for(int i=0;i<m-1;i++){
    if(ar[i]>ar[i+1]){
        count1+=n-(ar[i]-ar[i+1]);
    }
    else if(ar[i]<ar[i+1]){
            count1+=ar[i+1]-ar[i];

    }
}
 cout<<count1;


}
