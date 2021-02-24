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

  int n;
  cin >> n;

  for (int i = 10; i >= 1; i--)
  {
    if (n % i == 0)
    {
      cout << i << endl;
      break;
    }
  }

  return 0;
}
