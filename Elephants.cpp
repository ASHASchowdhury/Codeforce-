#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int a, count = 0;
    cin >> a;
if(a%5==0){
    a=a/5;
}
 else{
    a=(a/5)+1;
 }
    cout << a;
    return 0;
}
