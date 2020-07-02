#include <vector>

using namespace std;
#include<bits/stdc++.h>

int maxSequence(const vector<int>& nums){
  if(nums.size()==0) return 0;
  int pos=0,neg=0;
  int n=nums.size();
  int sum=0;
  for(int i=0;i<n;i++)
  {
    if(nums[i]>=0)
    {
      pos++;
      sum=sum+nums[i];
    }
    else{
      neg++;
    }
  }
  if(neg==n) return 0;
  else if(pos==n) return sum;
  else {
    int maxcurrent=nums[0],maxglobal=nums[0];
    for(int i=1;i<=n-1;i++)
    {
      maxcurrent=max(nums[i],maxcurrent+nums[i]);
      if(maxcurrent>maxglobal)
      {
        maxglobal=maxcurrent;
      }
    }
    return maxglobal;
  }
}
