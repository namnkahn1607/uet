// adv-programme.57
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;

void subStr(string &str, vector<string> &substrings) {
    int n = str.length();
    
    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++)
            substrings.push_back(str.substr(i, len));
    }
}

void permute(string str, int l, int r, set<string>& uniqueSubstrings) {
    if (l == r) {
        vector<string> substrings;
        subStr(str, substrings);

        for (const string& sub : substrings) 
            uniqueSubstrings.insert(sub);
        
        return;
    }
    
    for (int i = l; i <= r; i++) {
        swap(str[l], str[i]);
        permute(str, l + 1, r, uniqueSubstrings);
        swap(str[l], str[i]);
    }
}

int main() {
    string s;
    getline(cin, s);
    
    set<string> uniqueSubstrings;
    
    permute(s, 0, s.length() - 1, uniqueSubstrings);
    
    for (const string& substring : uniqueSubstrings)
        cout << substring << '\n';
    
    return 0;
}