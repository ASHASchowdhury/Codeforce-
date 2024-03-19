#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string a, b;
    cin >> a >> b;
    
    int count = 0;
    int c = a.size(); // Get the length of the string
    
    for(int i = 0; i < c; i++) {
        if(a[i] == b[c - 1 - i]) // Compare characters from both ends of the strings
            count++;
    }
    
    if(count == c) // Check if all characters matched
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}
