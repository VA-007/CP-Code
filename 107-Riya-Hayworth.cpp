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

  string str;
  cin >> str;

  // string red = 'R';
  // string andy = 'A';

  int redPos = str.find('R');
  int andyPos = str.find('A');
  int ans = 0;

  if (abs(redPos - andyPos) == 1)
  {
    cout << 0;
  }
  else if (redPos > andyPos)
  {
    for (int i = redPos - 1; i >= andyPos; i--)
    {
      if (str[i] == 'G')
      {
        continue;
      }
      else if (str[i] == 'B')
      {
        if (str[i - 1] == 'G' || str[i - 1] == 'A')
        {
          ans += 2;
        }
        else
        {
          ans++;
        }
      }
      else
      {
        cout << ans;
        break;
      }
    }
  }
  else
  {
    for (int i = redPos + 1; i <= andyPos; i++)
    {
      if (str[i] == 'G')
      {
        continue;
      }
      else if (str[i] == 'B')
      {
        if (str[i + 1] == 'G' || str[i + 1] == 'A')
        {
          ans += 2;
        }
        else
        {
          ans++;
        }
      }
      else
      {
        cout << ans;
        break;
      }
    }
  }

  return 0;
}
