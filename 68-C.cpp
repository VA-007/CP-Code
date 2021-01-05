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
    string s;
    cin >> s;
    int zeroes = 0, ones = 0;

    if (s.length() % 2 != 0)
    {
      cout << -1 << endl;
      continue;
    }

    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '0')
      {
        zeroes++;
      }
      else
      {
        ones++;
      }
    }

    if (zeroes == 0 || ones == 0)
    {
      cout << -1;
    }
    else if (zeroes == ones)
    {
      cout << 0;
    }
    else
    {
      cout << (s.length() / 2) - (min(zeroes, ones));
    }

    cout << endl;
  }

  return 0;
}

// #include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
// #include <cmath>

// #define int long long

// using namespace std;

// main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//     string S;
//     getline(cin, S);
//     string temp;

//     temp.push_back(S[0]);

//     for (int i = 1; i < S.length() - 1; i++)
//     {
//       if (S[i] == ' ')
//       {
//         temp.push_back(S[i + 1]);
//       }
//     }

//     cout << temp << endl;

//   return 0;
// }
