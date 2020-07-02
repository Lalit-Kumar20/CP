#include <iostream>
#include <vector>

using namespace std;

long long determinant(vector<vector<long long>> m)
{
  if (m.size() < 1)
    return 0;
  if (m.size() != m.at(0).size())
    return 0;

  if (m.size() == 1)
    return m.at(0).at(0);

  int minus = 1;
  long long result = 0;
  for (int i = 0; i < m.at(0).size(); i++)
  {
    vector<vector<long long>> subMatrix;
    for (int j = 1; j < m.size(); j++)
    {
      vector<long long> cof;
      for (int k = 0; k < m.at(0).size(); k++)
      {
        if (k == i)
          continue;
        cof.push_back(m.at(j).at(k));
      }
      subMatrix.push_back(cof);
    }
    result += minus * m.at(0).at(i) * determinant(subMatrix);
    minus *= -1;
  }

  return result;
}
