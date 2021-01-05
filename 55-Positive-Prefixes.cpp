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
    int n, k;
    cin >> n >> k;
    int arr[n];

    int count = 0, sum = 0;

    if (n % 2 == 0)
    {
      for (int i = 1; i <= n; i++)
      {
        if (i % 2 == 0)
        {
          arr[i] = i;
        }
        else
        {
          arr[i] = -i;
        }
      }

      // SUM of each element
      for (int i = 1; i <= n; i++)
      {
        sum += arr[i];

        if (sum > 0)
        {
          count++;
        }
      }

      // checking k values
      if (count > k)
      {
        for (int i = n; i >= 1; i -= 2)
        {
          arr[i] *= -1;
          count--;

          if (count == k)
          {
            break;
          }
        }
      }
      else if (count < k)
      {
        for (int i = n; i >= 1; i--)
        {
          if (arr[i] < 0)
          {
            arr[i] *= -1;
            count++;
          }

          if (count == k)
          {
            break;
          }
        }
      }

      for (int i = 1; i <= n; i++)
      {
        cout << arr[i] << " ";
      }

      cout << endl;
    }
    else
    {
      for (int i = 1; i <= n; i++)
      {
        if (i % 2 == 0)
        {
          arr[i] = -i;
        }
        else
        {
          arr[i] = i;
        }
      }

      // SUM of each element
      for (int i = 1; i <= n; i++)
      {
        sum += arr[i];

        if (sum > 0)
        {
          count++;
        }
      }

      // checking k values
      if (count > k)
      {
        for (int i = n; i >= 1; i -= 2)
        {
          arr[i] *= -1;
          count--;

          if (count == k)
          {
            break;
          }
        }
      }
      else if (count < k)
      {
        for (int i = n; i >= 1; i--)
        {
          if (arr[i] < 0)
          {
            arr[i] *= -1;
            count++;
          }

          if (count == k)
          {
            break;
          }
        }
      }

      for (int i = 1; i <= n; i++)
      {
        cout << arr[i] << " ";
      }

      cout << endl;
    }
  }

  return 0;
}