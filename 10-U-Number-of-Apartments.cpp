#include <iostream>

using namespace std;

int main()
{
  int n = 0, threes = 0, fives = 0, sevens = 0, rem = 0;
  cin >> n;
  int arr[n];

  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (size_t i = 0; i < n; i++)
  {
    if ((arr[i] % 3) == 0 || (arr[i] % 5) == 0 || (arr[i] % 7) == 0 || (arr[i] / 3) > 0 || (arr[i] / 5) > 0 || (arr[i] / 7) > 0)
    {
      if ((arr[i] / 7) > 0)
      {
        sevens = arr[i] / 7;
        rem = arr[i] % 7;
      }
      else if ((arr[i] / 5) > 0)
      {
        fives = arr[i] / 5;
        rem = arr[i] % 5;
      }
      else if ((arr[i] / 3) > 0)
      {
        threes = arr[i] / 3;
        rem = arr[i] % 3;
      }

      cout << threes << " " << fives << " " << sevens << "\n";
    }
    else if (arr[i] <= 2 || arr[i] == 4)
    {
      cout << -1 << "\n";
    }
  }

  return 0;
}
