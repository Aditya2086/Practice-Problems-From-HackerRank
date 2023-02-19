#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main() {
    int N, n, total;
    float pos = 0., neg = 0., zer = 0.;
    
    cin >> N;
    
    total = N;
    
    while (N--) {
        cin >> n;
        if (n > 0) pos++;
        else if (n < 0) neg++;
        else zer++;
    }
    
    cout << pos / total << endl;
    cout << neg / total << endl;
    cout << zer / total << endl;
    
    return 0;
}
