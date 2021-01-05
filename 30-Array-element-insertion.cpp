#include <iostream>

using namespace std;

int main()
{
  int a[100], n, element, elepos;
  cin >> n;

  for (size_t i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  cin >> element >> elepos;

  for (size_t i = n; i >= elepos; i--)
  {
    a[i] = a[i - 1];
  }

  a[elepos] = element;

  for (size_t i = 0; i <= n; i++)
  {
    cout << a[i] << " ";
  }

  return 0;
}
