#include <iostream>

using namespace std;

int main()
{
  int t, res = 0;
  cin >> t;

  while (t--)
  {
    int sum = 0;
    bool arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    for (size_t i = 0; i < 3; i++)
    {
      sum += arr[i];
    }
    if (sum >= 2)
    {
      res++;
    }
  }

  cout << res;

  return 0;
}
