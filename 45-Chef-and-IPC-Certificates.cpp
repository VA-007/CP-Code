#include <iostream>

using namespace std;

int main()
{
  int n, m, k, count = 0;
  cin >> n >> m >> k;

  while (n--)
  {
    int arr[k], q, ans = 0;

    for (int i = 0; i < k; i++)
    {
      cin >> arr[i];
      ans += arr[i];
    }

    cin >> q;

    if (ans >= m && q <= 10)
    {
      count++;
    }
  }

  cout << count;

  return 0;
}