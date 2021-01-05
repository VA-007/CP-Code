#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];

    if (n % 2 == 0)
    {
      for (int i = n; i >= 1; i--)
      {
        cout << i << " ";
      }
    }
    else
    {
      for (int i = n; i >= 1; i--)
      {
        arr[i] = i;
      }
      int temp = arr[n / 2 + 1];
      arr[n / 2 + 1] = arr[n];
      arr[n] = temp;

      for (int i = n; i >= 1; i--)
      {
        cout << arr[i] << " ";
      }
    }

    cout << "\n";
  }

  return 0;
}
