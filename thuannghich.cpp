#include <iostream>
using namespace std;

int tn(long long n)
{
    int lat = 0;
    int temp = n;
    while (n)
    {
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    if (lat == temp)
        return 1;
    else
        return 0;
}

int main()
{
    long long n;
    cin >> n;
    if (tn(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}