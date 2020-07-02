#include <vector>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 ll countChange(const ll money, const std::vector<unsigned int>& S) {
  ll  n = money;
   ll table[n+1]; 
  ll m = S.size();
    memset(table, 0, sizeof(table)); 
  

    table[0] = 1; 

    for(ll i=0; i<m; i++) 
        for(ll j=S[i]; j<=n; j++) 
            table[j] += table[j-S[i]]; 
  
    return table[n]; 
}
