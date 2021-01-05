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

  int t;
  cin >> t;

  while (t--)
  {
    long long a, b;
    cin >> a >> b;

    long long pairs = 0, Aevens = 0, Aodds = 0, Bevens = 0, Bodds = 0;

    if (a % 2 == 0)
    {
      Aodds = Aevens = a / 2;
    }
    else
    {
      Aodds = a / 2 + 1;
      Aevens = a / 2;
    }

    if (b % 2 == 0)
    {
      Bodds = Bevens = b / 2;
    }
    else
    {
      Bodds = b / 2 + 1;
      Bevens = b / 2;
    }

    pairs = (Aodds * Bodds) + (Aevens * Bevens);
    cout << pairs << endl;
  }

  return 0;
}