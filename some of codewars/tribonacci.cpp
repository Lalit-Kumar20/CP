std::vector<int> tribonacci(std::vector<int> signature, int n)
{
  int sum = 0;
  int num1, num2, num3;
  std::vector<int> result;

  if (signature.size() <= n) {
    for (auto num : signature) {
      result.emplace_back(num);
    }

    num1 = signature[0];
    num2 = signature[1];
    num3 = signature[2];

    for (int i = 0; i < n - 3; ++i) {
      sum = num1 + num2 + num3;
      result.emplace_back(sum);
      num1 = num2;
      num2 = num3;
      num3 = sum;
    }
    return result;
  }
  else if (n == 0) {
    return result;
  }
  else {
    for (int i = 0; i < n; ++i) {
      result.emplace_back(signature[i]);
    }
    return result;
  }
}
