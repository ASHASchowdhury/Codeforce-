#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, c, mx, ea, eb, ec, ed;
 
    cin >> a >> b >> c;
 
    ea = a + b + c;
    eb = a * b * c;
    ec = a * (b + c);
    ed = (a + b) * c;
 
    mx = max(ea, max(eb, max(ec, ed)));
 
    cout << mx;
 
    return 0;
}
