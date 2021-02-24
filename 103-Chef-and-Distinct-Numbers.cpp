#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

void sieve(int n)
{
  int arr[100]{0};

  for (int i = 2; i <= n; i++)
  {
    if (arr[i] == 0)
    {
      for (int j = i * i; j <= n; j += i)
      {
        arr[j]++;
      }
    }
  }

  for (int i = 2; i <= n; i++)
  {
    if (arr[i] == 0)
    {
      cout << i << " ";
    }
  }
  cout << endl;
}


main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // sieve(100);

  int t;
  // cin >> t;

  // while (t--)
  // {
  //   int n;
  //   cin >> n;

  //   int arr[n];

  //   for (int i = 0; i < n; i++)
  //   {
  //     cin >> arr[i];
  //   }

  //   sort(arr, arr + n);

  //   bool flag = true;
  //   for (int i = 0; i < n - 1; i++)
  //   {
  //     if (arr[i] == arr[i + 1])
  //     {
  //       cout << "Yes" << endl;
  //       flag = false;
  //       break;
  //     }
  //   }

  //   if (flag == true)
  //   {
  //     cout << "No" << endl;
  //   }
  // }

  return 0;
}
