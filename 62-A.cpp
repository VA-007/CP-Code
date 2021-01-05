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
    long long n, evens = 0, odds = 0;
    cin >> n;
    long long arr[n];

    for (long long i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] % 2 == 0)
      {
        evens++;
      }
      else
      {
        odds++;
      }
    }

    // cout << *(max_element(arr, arr + n));

    if (n == 1)
    {
      cout << 0 << endl;
      continue;
    }

    cout << evens * odds;

    cout << endl;
  }

  return 0;
}
