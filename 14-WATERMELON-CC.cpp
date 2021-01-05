#include <iostream>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n, sum = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum = sum + arr[i];
    }

    if (sum < 0)
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n";
    }
  }

  return 0;
}
