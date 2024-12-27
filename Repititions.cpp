#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int ll;
 
int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector<int> v;
 
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == s[i]) {
            int y = 1;
            while (i < n && s[i] == s[i - 1]) {
                y++;
                i++; 
            }
            v.push_back(y);
        }
    }
 
    if (!v.empty()) {
        cout << *max_element(v.begin(), v.end()) << endl;
    } else {
        cout << 1 << endl; 
    }
}
