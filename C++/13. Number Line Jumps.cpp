#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    // Corner case: Second kangaroo is at least as fast as first kangaroo 
    if(v2 >= v1) {
        cout<<"NO";
    } else if((x2-x1)%(v1-v2) == 0) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}
