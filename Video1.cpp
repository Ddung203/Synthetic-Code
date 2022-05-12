
/**
 * Video 1: [Bài tập C(Mảng)]
 * Test case: 5 | 2 10 2 10 5
 *
 * a, In ra số lớn nhất và nhỏ nhất trong mảng
 * b, In ra chỉ số của số nhỏ nhất đầu tiên trong mảng
 * c, Tìm và in ra số lớn nhất và số lớn thứ 2 trong mảng
 * d, Tìm và in ra số lớn nhất và số lớn thứ 2 trong mảng (2 số phải khác nhau)
 *    Nếu không tìm được số lớn thứ 2 thì in ra -1. Test: 5 | 9 9 9 9 9
 * e, Đếm và liệt kê các số mà có các chữ số toàn là lẻ. Test case: 5 | 3 5 76 88 99 => 3 5 99
 * f, Cho mảng số nguyên đôi một khác nhau. Hãy liệt kê các phần tử mà có ít nhất 2 phần tử khác lớn hơn nó
 *    5 | 3 5 7 11 23 => 3 5 7
 *    Gợi ý: Tìm số lớn t2 trong mảng rồi duyệt mảng
 * g, Kiểm tra xem mảng có đối xứng không? Nếu có in "YES", nếu không in "NO"
 *
 */

#include <iostream>
#include <cmath>
using namespace std;
void nhap(int a[], int &n)
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
}

int checkE(int n)
{
  while (n)
  {
    int a = n % 10;
    if (a % 2 == 0)
      return 0;
    n / 10;
  }
  return 1;
}
void a(int a[], int n)
{
  int max = -1e9 - 1, min = 1e9 + 1;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > max)
      max = a[i];
    if (a[i] < min)
      min = a[i];
  }
  cout << "a, So lon nhat: " << max << endl;
  cout << "   So nho nhat: " << min << endl;
}

void b(int a[], int n)
{
  int idx = 0, min = 1e9 + 1;
  for (int i = 0; i < n; i++)
  {
    if (a[i] < min)
    {
      min = a[i];
      idx = i;
    }
  }
  cout << "b, Index: " << idx << endl;
  cout << "   Min: " << min << endl;
}

void c(int a[], int n)
{
  int max1 = -1e9 - 1, max2 = -1e9 - 1;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > max1)
    {
      max2 = max1;
      max1 = a[i];
    }
    else if (a[i] > max2)
      max2 = a[i];
  }

  cout << "c, So lon nhat: " << max1 << endl;
  cout << "   So lon thu 2: " << max2 << endl;
}

void d(int a[], int n)
{
  int max1 = -1e9 - 1, max2 = -1e9 - 1;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > max1)
    {
      max2 = max1;
      max1 = a[i];
    }
    else if (a[i] > max2 && a[i] != max1)
      max2 = a[i];
  }
  cout << "d, So lon nhat: " << max1 << endl;
  cout << "   So lon thu 2: " << max2 << endl;
}

void e(int a[], int n)
{
  int dem = 0, b[1000];
  for (int i = 0; i < n; i++)
  {
    if (checkE(a[i]) == 0)
    {
      b[dem] = a[i];
      ++dem;
    }
  }
  cout << dem << endl;
  for (int i = 0; i < dem; i++)
  {
    cout << b[i] << " " << endl;
  }
}

int main()
{
  int arr[1000], n;
  nhap(arr, n);

  // a(arr, n);
  // b(arr, n);
  // c(arr, n);
  // d(arr, n);
  e(arr, n);
  // f(arr, n);
  // g(arr, n);
  return 0;
}