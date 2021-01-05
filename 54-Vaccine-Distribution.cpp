#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
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
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);

    vector<int> atRisk;
    vector<int> notAtRisk;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] <= 9 || arr[i] >= 80)
      {
        atRisk.push_back(arr[i]);
      }
      else
      {
        notAtRisk.push_back(arr[i]);
      }
    }

    int totalDays = 0;
    if (atRisk.size() % d == 0)
    {
      totalDays += atRisk.size() / d;
    }
    else
    {
      totalDays += (atRisk.size() / d) + 1;
    }

    if (notAtRisk.size() % d == 0)
    {
      totalDays += notAtRisk.size() / d;
    }
    else
    {
      totalDays += (notAtRisk.size() / d) + 1;
    }

    cout << totalDays << endl;
  }

  return 0;
}
