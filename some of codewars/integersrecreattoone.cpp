#include <utility>
#include <vector>
using namespace std;
#include<cmath>
class SumSquaredDivisors
{
public:
static long long d(long long  n)
{  long long  sum=0;
  for (long long i=1;i<=n;i++) 
        {
    if (n%i==0) sum=sum+i*i;
       }
 return sum;        
}
   static bool isSquare(int n)
{
  for(int i=1;i<sqrt(n)+1;i++)
  {
    if(i*i==n)
    {
      return true;
    }
  }
  return false;
}
    static std::vector<std::pair<long long, long long>> listSquared(long long m, long long n){
     vector<pair<long long ,long long>> v;
  
  for(long long i=m;i<=n;i++)
  {
    if(isSquare(d(i))) 
    {
    
    pair<long long,long long> p = make_pair(i,d(i));
    v.push_back(p);
    
  }
}
return v;
}
};
