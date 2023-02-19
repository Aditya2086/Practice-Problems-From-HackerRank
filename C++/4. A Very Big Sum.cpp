#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main() {

   long long int arr[10];
    int n,i;
    scanf("%d",&n);
        long long int sum;
    sum=0;
    for(i=0;i<n;i++)
        scanf("%lli",&arr[i]);
     for(i=0;i<n;i++)
         {
         sum=sum+arr[i];
     }
    printf("%lli",sum);
    return 0;
}
