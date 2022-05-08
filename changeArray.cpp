#include <iostream>
using namespace std;

void deleteElements(int a[], int &n, int index)
{
  for (int i = index; i < n; i++)
  {
    a[i] = a[i + 1];
  }
  n--;
  cout << "\n n: "<< n << endl;
}

void addElements(int a[], int &n, int index, int val)
{
  ++n;
  for (int i = n; i > index; i--)
  {
    a[i] = a[i - 1];
  }
  a[index] = val;
  cout << "\n n: "<< n << endl;

}

int main()
{
  int n = 6;
  int arr[6] = {1, 2, 3, 4, 5, 6}; // xóa 4 => index: 3
  addElements(arr, n, 3, 99);      // 1 2 3 99 4 5 6
  for (int i = 0; i <= n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}