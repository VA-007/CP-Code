#include <bits/stdc++.h>
#include <iostream>
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
    int n, k;
    cin >> n >> k;
    string kth(1000, 'a');

    string res = kth.substr(0, k);
    // cout << res;

    int s = n - k;

    while (s--)
    {
      res += 'b';
      if (!s)
      {
        break;
      }

      res += 'c';
      s--;

      if (!s)
      {
        break;
      }

      res += 'a';
      s--;
    }

    cout << res << endl;
  }

  return 0;
}