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

  float balance;
  int withdraw;
  cin >> withdraw;
  cin >> balance;

  if ((withdraw % 5 == 0) && ((balance - (withdraw + 0.50)) >= 0))
  {
    cout << balance - withdraw - 0.50;
  }
  else
  {
    cout << balance;
  }

  return 0;
}
