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
    int n;
    string s;
    cin >> n >> s;

    int para = 0;
    string b;

    for (int i = n - 1; i >= 0; i--)
    {
      if (s[i] == ')')
      {
        para++;
      }
      else
      {
        b = s.substr(0, i + 1);
        break;
      }
    }

    if (para > b.length())
    {
      cout << "Yes";
    }
    else
    {
      cout << "No";
    }

    cout << endl;
  }

  return 0;
}