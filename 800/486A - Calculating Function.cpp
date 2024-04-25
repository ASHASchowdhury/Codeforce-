#include <iostream>
using namespace std;
 
long long function_f(long long n) {
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return -(n / 2 + 1);
    }
}
 
int main() {
    long long n;
    cin >> n;
 
    cout << function_f(n) << endl;
 
    return 0;
}
