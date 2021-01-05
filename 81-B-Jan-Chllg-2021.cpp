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
    string s, ans;
    cin >> n >> s;

    vector<string> arr{"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};

    vector<string> brr{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p"};

    for (int i = 0; i < n; i += 4)
    {
      int pos;
      string temp = s.substr(i, 4);

      for (int j = 0; j < 16; j++)
      {
        if (temp == arr[j])
        {
          pos = j;
          ans += brr[pos];
        }
      }
    }

    cout << ans << endl;
  }

  return 0;
}
