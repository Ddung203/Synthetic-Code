#include <iostream>
#include <cmath>
using namespace std;

int checkSNT(int n)
{
  for (int i = 2; i < sqrt(n); i++)
  {
    if (n % i == 0)
      return 0;
  }
  return n > 1;
}

int main()
{
  cout << checkSNT(13);
  return 0;
}

// Kiểm tra số nguyên tố