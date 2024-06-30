#include <iostream>
#include <vector>

using namespace std;

vector<int> concatenateArrays(const vector<int>& A, const vector<int>& B) {
    vector<int> C;
    C.reserve(A.size() + B.size()); // Reserve space to avoid reallocations
    C.insert(C.end(), B.begin(), B.end()); // Insert elements of B
    C.insert(C.end(), A.begin(), A.end()); // Insert elements of A
    return C;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N), B(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }
    
    vector<int> C = concatenateArrays(A, B);
    
    for (int i = 0; i < C.size(); ++i) {
        cout << C[i] << " ";
    }
    cout << endl;
    
    return 0;
}
