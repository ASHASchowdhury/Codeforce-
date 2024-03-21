
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
vector<int> min_segment_length(int t, vector<pair<int, string>>& test_cases) {
    vector<int> results;
 
    for (int i = 0; i < t; ++i) {
        int n = test_cases[i].first;
        string strip = test_cases[i].second;
 
        auto start_index = strip.find('B');
        auto end_index = strip.rfind('B');
 
        if (start_index == string::npos) {
            results.push_back(0);
        } else {
            results.push_back(end_index - start_index + 1);
        }
    }
 
    return results;
}
 
int main() {
    int t;
    cin >> t;
 
    vector<pair<int, string>> test_cases;
    for (int i = 0; i < t; ++i) {
        int n;
        string strip;
        cin >> n >> strip;
        test_cases.push_back(make_pair(n, strip));
    }
 
    vector<int> results = min_segment_length(t, test_cases);
 
    for (int result : results) {
        cout << result << endl;
    }
 
    return 0;}
