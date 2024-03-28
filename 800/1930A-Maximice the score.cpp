#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int a;
        cin>>a;
 
        vector<int> ar(2*a);
        for(int i =0;i< 2*a;i++)
            cin >> ar[i];
 
        sort(ar.begin(),ar.end());
 
        int cnt=0;
        for(int i=0;i<a*2;i+=2)
        {
             cnt+=ar[i];
        }
 
        cout <<cnt<<endl;
    }
 
    return 0;
}
