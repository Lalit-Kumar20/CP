long long rowSumOddNumbers(unsigned n){
  //your code here
 long long  first=1;
long long  d=2;
for(long long  i=0;i<n-1;i++)
{
  first=first+d;
  d=d+2;
}
long long  ans=0;
// cout<<first;
for(long long i=0;i<n;i++)
{
  ans=ans+first;
  first=first+2;
}
return ans;
}
