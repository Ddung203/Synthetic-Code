#include <iostream>
using namespace std;



void solve2(int n)
{
  long long *fibonaci = new long long[n];
  fibonaci[0] = 0;
  fibonaci[1] = 1;
  for (int i = 2; i < n; i++)
  {
    fibonaci[i] = fibonaci[i - 1] + fibonaci[i - 2];
  }
  for (int i = 0; i < n; i++)
  {
    printf("%1ld ", fibonaci[i]);
  }
  delete[] fibonaci;
}

int main()
{
  int n = 90;
  cin >> n;
  solve2(n);
  return 0;
}