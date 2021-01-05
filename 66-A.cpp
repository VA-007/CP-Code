#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define int long long

using namespace std;

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n, zeroes = 0, ones = 0;
    cin >> n;

    string arr;
    cin >> arr;

    for (int i = 0; i < n; i++)
    {
      if (arr[i] == '0')
      {
        zeroes++;
      }
      else
      {
        ones++;
      }
    }

    float remaining = 120 - n, perc = 100;
    perc -= (float(float(zeroes) / 120) * 100);

    // cout << perc << " " << zeroes << " ";

    if (perc >= 75)
    {
      cout << "YES";
    }
    else
    {
      cout << "NO";
    }

    cout << endl;
  }

  return 0;
}