#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int final = 50;

  for (int i = 0; i < n; i++)
  {
    final += arr[i];

    if (final > 100)
    {
      final = 100;
    }
    else if (final < 0)
    {
      final = 0;
    }
  }

  cout << final;

  return 0;
}
