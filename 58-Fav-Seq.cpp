#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    long long arr[n], arr2[n];

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    int j = 0, k = n - 1;
    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 0)
      {
        arr2[i] = arr[j];
        j++;
      }
      else
      {
        arr2[i] = arr[k];
        k--;
      }
    }

    for (int i = 0; i < n; i++)
    {
      cout << arr2[i] << " ";
    }

    cout << endl;
  }

  return 0;
}
