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
    int n, m;
    cin >> n >> m;

    vector<int> arr(n), brr(m);

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
      cin >> brr[i];
    }

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end(), greater<int>());

    int a = 0, b = 0;

    a = accumulate(arr.begin(), arr.end(), a);
    b = accumulate(brr.begin(), brr.end(), b);

    if (a > b)
    {
      cout << 0 << endl;
      continue;
    }

    int count = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
      int temp = 0;
      a = 0, b = 0;

      if (arr[i] < brr[i])
      {
        temp = arr[i];
        arr[i] = brr[i];
        brr[i] = temp;
        count++;
      }

      a = accumulate(arr.begin(), arr.end(), a);
      b = accumulate(brr.begin(), brr.end(), b);

      if (a > b)
      {
        cout << count << endl;
        flag = true;
        break;
      }
    }

    if (flag == false)
    {
      cout << -1 << endl;
    }
  }

  return 0;
}
