#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    float n, x;

    cin >> n >> x;

    if (n == 1 || n == 2)
    {
      cout << 1 << "\n";
    }
    else
    {
      float floor = ceil((n - 2) / x) + 1;
      cout << floor << "\n";
    }
  }

  return 0;
}
