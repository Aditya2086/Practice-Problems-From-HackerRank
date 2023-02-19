#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main() {
    int n, k, sum=0;
    cin >> n >> k;
    for (int i=0;i<n;i++) {
        int a;
        cin >> a;
        if (i!=k) sum+=a;
    }
    int l;
    cin >> l;
    if (sum/2==l) cout << "Bon Appetit" << endl;
    else cout << l-sum/2 << endl;
}
