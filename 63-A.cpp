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

  long long n, m;
  cin >> n >> m;
  long long arr[n], brr[m];

  for (long long i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (long long i = 0; i < m; i++)
  {
    cin >> brr[i];
  }

  sort(arr, arr + n);
  sort(brr, brr + m);

  long long count = 0;
  for (long long i = 0; i < m; i++)
  {
    if (brr[i] < arr[0])
    {
      count++;
    }
  }

  cout << count * n;

  return 0;
}