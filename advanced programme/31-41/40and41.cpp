// adv-programme.40 & 41
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

bool validName(string &name) {
    return name.size() > 1 and isupper(name[0]);
}

int main() {
    string filename;
    getline(cin, filename);

    ifstream inputFile(filename);

    int N; inputFile >> N;
    inputFile.ignore();

    int cnt = 0;

    for (int i = 0; i < N; ++i) {
        string line, word;
        getline(inputFile, line);
        stringstream ss(line);
        
        while (ss >> word) {
            if (validName(word))
                ++cnt;
        }
    }

    cout << cnt << '\n';

    return 0;
}