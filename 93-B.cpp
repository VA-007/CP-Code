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
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    if (s == t)
    {
      cout << s << endl;
      continue;
    }

    int sa = 0, sb = 0, ta = 0, tb = 0;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'a')
      {
        sa++;
      }
      else
      {
        sb++;
      }
    }
    for (int i = 0; i < m; i++)
    {
      if (t[i] == 'a')
      {
        ta++;
      }
      else
      {
        tb++;
      }
    }

    if ((sa == 0 && ta == 0) || (sb == 0 && tb == 0))
    {
      if (n > m)
      {
        cout << s << s << endl;
        continue;
      }
      else
      {
        cout << t << t << endl;
        continue;
      }
    }

    if (n > m)
    {
      if (s.find(t) == string::npos)
      {
        cout << -1 << endl;
        continue;
      }
    }
    if (m > n)
    {
      if (t.find(s) == string::npos)
      {
        cout << -1 << endl;
        continue;
      }
    }

    if (n > m)
    {
      cout << s << s << endl;
      continue;
    }
    else
    {
      cout << t << t << endl;
      continue;
    }

    cout << -1 << endl;
  }

  return 0;
}
