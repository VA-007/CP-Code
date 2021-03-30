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

  ll t = 0;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    string s2 = "party";
    string s3 = "pawri";
    int i = 0;

    while (true)
    {
      i = s.find(s2, i);
      if (i == string::npos)
        break;

      s.replace(i, 5, s3);

      i += 5;
    }

    cout << s << endl;
  }

  return 0;
}
