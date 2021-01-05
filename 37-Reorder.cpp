#include <iostream>
#include <numeric>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n, m;
    cin >> n >> m;
    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    int sum = 0;
    sum = accumulate(arr, arr + n, 0);

    if (sum == m)
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
