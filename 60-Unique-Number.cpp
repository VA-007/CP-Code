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
    long long x;
    cin >> x;

    int a[60];
    a[10] = 19;
    a[11] = 29;
    a[12] = 39;
    a[13] = 49;
    a[14] = 59;
    a[15] = 69;
    a[16] = 79;
    a[17] = 89;
    a[18] = 189;
    a[19] = 289;
    a[20] = 389;
    a[21] = 489;
    a[22] = 589;
    a[23] = 689;
    a[24] = 789;
    a[25] = 1789;
    a[26] = 2789;
    a[27] = 3789;
    a[28] = 4789;
    a[29] = 5789;
    a[30] = 6789;
    a[31] = 16789;
    a[32] = 26789;
    a[33] = 36789;
    a[34] = 46789;
    a[35] = 56789;
    a[36] = 156789;
    a[37] = 256789;
    a[38] = 356789;
    a[39] = 456789;
    a[40] = 1456789;
    a[41] = 2456789;
    a[42] = 3456789;
    a[43] = 13456789;
    a[44] = 23456789;
    a[45] = 123456789;
    a[46] = -1;
    a[47] = -1;
    a[48] = -1;
    a[49] = -1;
    a[50] = -1;

    if (x / 10 < 1)
    {
      cout << x;
    }
    else
    {
      cout << a[x];
    }

    cout << endl;
  }

  return 0;
}
