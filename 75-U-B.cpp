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
    int n;
    string s, p;
    cin >> n >> s >> p;

    if (s == p)
    {
      cout << "Yes" << endl;
      continue;
    }

    // int c1 = 0, c2 = 0;

    // for (int i = 0; i < n; i++)
    // {
    //   if (s[i] == '0')
    //     c1++;

    //   if (p[i] == '0')
    //     c2++;
    // }

    // if (c1 != c2)
    // {
    //   cout << "No" << endl;
    //   continue;
    // }

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == p[i])
      {
        flag = false;
        break;
      }
    }

    if (flag == false)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}
