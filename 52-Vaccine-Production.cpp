#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int d1, v1, d2, v2, p;
  cin >> d1 >> v1 >> d2 >> v2 >> p;

  int totalDays = 0;
  if (d1 == d2)
  {
    if (d1 == 1)
    {
      while (!(p <= 0))
      {
        p -= v1;
        p -= v2;
        totalDays++;
      }

      cout << totalDays << endl;
    }
    else
    {
      totalDays += d1 - 1;

      while (!(p <= 0))
      {
        p -= v1;
        p -= v2;
        totalDays++;
      }

      cout << totalDays;
    }
  }

  if (d1 > d2)
  {
    totalDays += d2 - 1;

    while (d2 != d1 && !(p <= 0))
    {
      p -= v2;
      d2++;
      totalDays++;
    }

    while (!(p <= 0))
    {
      p -= v1;
      p -= v2;
      totalDays++;
    }

    cout << totalDays;
  }

  if (d2 > d1)
  {
    totalDays += d1 - 1;

    while (d1 != d2 && !(p <= 0))
    {
      p -= v1;
      d1++;
      totalDays++;
    }

    while (!(p <= 0))
    {
      p -= v1;
      p -= v2;
      totalDays++;
    }

    cout << totalDays;
  }

  return 0;
}