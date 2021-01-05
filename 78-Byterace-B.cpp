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
    int n, k;
    cin >> n >> k;

    if (n > k)
    {
      cout << -1 << endl;
      continue;
    }
    else if (n == k)
    {
      string s(n, 'a');
      cout << s << endl;
      continue;
    }
    else if (n == 1 && k % 2 != 0)
    {
      cout << -1 << endl;
      continue;
    }

    string s = "abcdefghijklmnopqrstuvwxyz";
    vector<int> brr(25);
    for (int i = 0; i < 26; i++)
    {
      brr[i] = 2 ^ i;
    }

    vector<int> arr(n, 1);
    int sum = n;
    string ans;

    for (int i = n - 1; i >= 0; i--)
    {
      while (sum + arr[i] <= k)
      {
        sum += arr[i];
        arr[i] *= 2;
      }
    }

    for (int i = 0; i < n; i++)
    {
      int ele = arr[i] - 1;
      int pos = 0;
      for (int i = 0; i < 26; i++)
      {
        if (brr[i] == ele)
        {
          pos = i;
          break;
        }
      }

      ans += s[pos];
    }

    if (sum != k)
    {
      cout << -1 << endl;
      continue;
    }
    else
    {
      cout << ans;
      cout << endl;
    }

    // cout << ans << endl;
  }

  return 0;
}


for (int i = 0; i < .size(); i++)
{
  
}
