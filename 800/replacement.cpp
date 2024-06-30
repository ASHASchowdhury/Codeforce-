#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    // Perform the replacements
    for (int i = 0; i < N; ++i) {
        if (A[i] > 0) {
            A[i] = 1;
        } else if (A[i] < 0) {
            A[i] = 2;
        }
    }
    
    // Print the modified array
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    return 0;
}
