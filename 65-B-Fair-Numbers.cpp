#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    long long n, temp = 0, x = 0;
    cin >> n;
    temp = n;

    if (n / 10 == 0)
    {
      cout << n << endl;
      continue;
    }

    bool flag = false;

    while (flag != true)
    {
      while (temp != 0)
      {
        x = temp % 10;
        temp = temp / 10;
        if (x == 0)
        {
          continue;
        }
        if (n % x == 0)
        {
          if (temp == 0)
          {
            cout << n << endl;
            flag = true;
            break;
          }
          continue;
        }
        else
        {
          n++;
          temp = n;
        }
      }
    }
  }

  return 0;
}