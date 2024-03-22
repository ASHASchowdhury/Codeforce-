#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string x;
    int count = 1; 
 
    cin >> x;
 
    for (int i = 0; i < x.size() - 1; i++) {
        if (x[i] == x[i + 1]) {
            count++;
            if (count == 7) {
                cout << "YES";
                return 0; 
            }
        } else {
            count = 1; 
        }
    }
 
    cout << "NO"; 
    return 0;
}
 
