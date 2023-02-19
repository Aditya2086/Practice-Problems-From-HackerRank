#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numLines;
    int currNumber, total = 0;
    
    cin >> numLines;
    
    for (int i=0; i<numLines;i++) {
        cin >> currNumber;
        total += currNumber;
    }
    
    cout << total;
    
    return 0;
}
