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

  int t = 0;
  cin >> t;

  while (t--)
  {
    vector<ll> arr;
    for (int i = 1; i * i <= 1000000; i++)
    {
      arr.push_back(i * i);
    }

    int i = 0;
    int guess = 0;

    while (true)
    {
      cout << arr[i++];
      cout << flush << endl;
      cin >> guess;

      if (guess == 1)
        break;
      else if (guess == 0)
        continue;
      else if (guess == -1)
      {
        exit(0);
      }
    }
  }

  return 0;
}
