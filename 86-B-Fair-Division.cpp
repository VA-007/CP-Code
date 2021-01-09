#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int even = 0, odd = 0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] % 2 == 0)
      {
        even++;
      }
      else
      {
        odd++;
      }
    }

    if ((even % 2 == 0 && odd % 2 == 0))
    {
      cout << "YES" << endl;
      continue;
    }
    else if (even % 2 != 0 && odd % 2 == 0 && odd > 0)
    {
      cout << "YES" << endl;
      continue;
    }
    else if (even % 2 == 0 && odd % 2 != 0)
    {
      cout << "NO" << endl;
      continue;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}