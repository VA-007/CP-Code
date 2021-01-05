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
    cin >> n;
    cin >> s;

    // if (n % 4 == 0)
    // {
    //   cout << "YES";
    // }
    // else
    // {
    //   cout << "NO";
    // }

    string s1 = "2", s2 = "20", s3 = "202", s4 = "2020", s5 = "0", s6 = "020";

    // cout << s.substr(0, 1) << "\n";
    // cout << s.substr(n - 3, n - 1);
    // cout << s.substr(n - 1, n - 1);

    if (s.substr(0, 4) == s4)
    {
      cout << "YES";
    }
    else if (s.substr(n - 4, n - 1) == s4)
    {
      cout << "YES";
    }
    else if ((s.substr(0, 1) == s1) && (s.substr(n - 3, n - 1) == s6))
    {
      cout << "YES";
    }
    else if ((s.substr(0, 2) == s2) && (s.substr(n - 2, n - 1) == s2))
    {
      cout << "YES";
    }
    else if ((s.substr(0, 3) == s3) && (s.substr(n - 1, n - 1) == s5))
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
