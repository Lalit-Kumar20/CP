#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> permutations(string s) {
  // Your code here
  vector<string> ans;
int n=s.size();
char a[n];
for(int i=0;i<n;i++) a[i]=s[i];
sort(a,a+n);
do {
  string s1;
  for(int i=0;i<n;i++)
  {
    s1.push_back(a[i]);
  }
  ans.push_back(s1);
}while(next_permutation(a,a+n));
  return ans;
}
