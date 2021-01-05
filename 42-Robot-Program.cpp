#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int x, y;
    cin >> x >> y;

    if (x == y)
    {
      cout << abs(x * 2) << "\n";
    }
    else if (x == 0)
    {
      cout << abs((y * 2) - 1) << endl;
    }
    else if (y == 0)
    {
      cout << abs((x * 2) - 1) << endl;
    }
    else
    {
      int ans = abs(abs(x) - abs(y));
      cout << (ans * 2) + ((min(x, y) * 2) - 1) << endl;
    }
  }

  return 0;
}
