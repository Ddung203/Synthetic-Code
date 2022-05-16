#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long du = a % b;
        a = b;
        b = du;
    }
    return a;
}
long long lcm(long long a, long long b) { return a * b / gcd(a, b); }
int main()
{
    cout << gcd(10, 20);
    cout << lcm(10, 20);
    return 0;
}