#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int t = 0;
  cin >> t;

  while (t--)
  {
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int arr[n], brr[n * 2];

    for (int i = 0; i < n; i++)
    {
      arr[i] = i;
      brr[i] = brr[n + i] = i;
    }

    int temp = 0;
    for (int jump = x; jump < (sizeof(brr) / sizeof(brr[0])); jump = jump + k)
    {
      if (brr[jump] == y)
      {
        temp++;
      }
    }

    if (temp > 0)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }

  return 0;
}
