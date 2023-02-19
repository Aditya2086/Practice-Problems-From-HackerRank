#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{ int n;
 cin>>n;
 int ar[n];
 for(int i=0;i<n;i++)
 {
     cin>>ar[i];
 }  
    int max=ar[0];
  for(int j=0;j<n;j++)
  {
      if(max<ar[j])
          max=ar[j];
  } int count=0;
  for(int k=0;k<n;k++)
  {
      if(ar[k]==max)
          count++;
  }
 
cout<<count;
return 0;    
}
