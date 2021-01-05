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
    int n;
    cin >> n;
    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    for (size_t i = 0; i < n / 2; i++)
    {
      int temp = arr[i];
      arr[i] = arr[n - i - 1] * -1;
      arr[n - i - 1] = temp;
    }

    for (auto &&i : arr)
    {
      cout << i << " ";
    }

    cout << endl;
  }

  return 0;
}
