#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int l, r, t;
    cin >> l >> r;

    if (l == r  || abs(l-r) > 2)
    {
      cout << -1 << "\n";
    }
    else
    {
      if (l > r)
      {
        if (r <= 1)
        {
          cout << -1 << "\n";
        }
        else
        {
          cout << l << "\n";
        }
      }
      else
      {
        if (l <= 1)
        {
          cout << -1 << "\n";
        }
        else
        {
          cout << r << "\n";
        }
      }
    }
  }

  return 0;
}
