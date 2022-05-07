#include <iostream>
#include <cmath>

using namespace std;

int cp(long long n)
{
  int can = sqrt(n) + 0.5;
  if (1ll * can * can == n)
    return 1;
  return 0;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    int c1 = sqrt(a), c2 = sqrt(b);
    if (c1 * c1 != a)
      ++c1;
    for (int i = c1; i <= c2; i++)
      cout << i * i << " ";
    cout << endl;
  }
  return 0;
}
