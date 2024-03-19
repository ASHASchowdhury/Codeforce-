#include <iostream>
using namespace std;
 
int main() {
    int t, s;
    cin >> t >> s;
 
    int count1 = 0, count2 = 0;
    while (t--) {
        int a;
        cin >> a;
        if (a > s) {
            count1++;
        } else {
            count2++;
        }
    }
 
    int tot = count1 * 2 + count2;
    cout << tot;
 
    return 0;
}
