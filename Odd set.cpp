#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int n;
    while(test--)
    {
        cin>>n;
        int x,count=0,sum=0;
        for(int i=1; i<=n*2; i++){
            cin>>x;
        if(x%2==0)count++;}
 
        if(count==n)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
 
    }
 
    return 0;
}
