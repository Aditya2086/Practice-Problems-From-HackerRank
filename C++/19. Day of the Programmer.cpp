#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main() {
    int year;
    std::cin >> year;
    if (year == 1918) { 
        std::cout << "26.09.1918\n";
    } else 
    {
        if ((year < 1918 && year % 4 == 0) || (year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            std::cout << "12.09." << year << '\n';
        } else {
            std::cout << "13.09." << year << '\n';
        }
    }

    return 0;
}
