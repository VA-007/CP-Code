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
    long long a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
      cout << "NO";
      cout << endl;
      continue;
    }

    long long sum = a + b + c;
    if (sum % 9 == 0)
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
