#include <iostream>
#include <string>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, c0, c1, h, cost = 0;
    string s;
    cin >> n >> c0 >> c1 >> h >> s;

    if (c0 == c1)
    {
      cout << c0 * n << "\n";
      continue;
    } 

    int zeroes = 0, ones = 0;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '0')
      {
        zeroes++;
      }
      else
      {
        ones++;
      }
    }

    if (h > c0 && h > c1)
    {
      cost += ((ones * c1) + (zeroes * c0));
    }
    else if (c0 > c1)
    {
      cost += (h * zeroes) + (c1 * n);
    }
    else
    {
      cost += (h * ones) + (c0 * n);
    }

    cout << cost << "\n";
  }

  return 0;
}
