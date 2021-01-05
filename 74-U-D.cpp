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
    int n, m, q;
    cin >> n >> m;

    int arr[n][m], brr[n][m];

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> arr[i][j];
        brr[i][j] = arr[i][j];
      }
    }

    cin >> q;

    while (q--)
    {
      int x, y, v;
      cin >> x >> y >> v;
      bool flag = true;

      brr[x][y] = v;

      for (int i = 0; i < 1; i++)
      {
        for (int j = 0; j < m; j++)
        {
          if ((i == 0 && j == m) || (i == n && j == 0))
          {
            continue;
          }

          int l = i, r = j;
          while (i != n)
          {
            if (brr[i][j] == brr[i + 1][j + 1])
            {
              continue;
            }
            else
            {
              flag = false;
              break;
            }
          }

          i = l;
          j = r;

          if (flag == false)
          {
            break;
          }
        }

        if (flag == false)
        {
          break;
        }
      }

      if (flag == true)
      {
        cout << "Yes";
      }
      else
      {
        cout << "No";
      }

      brr[x][y] = arr[x][y];
      cout << endl;
    }

    cout << endl;
  }

  return 0;
}

// 00 01 02 03 10 11 12 13 20 21 22 23

    //     3 x 4
