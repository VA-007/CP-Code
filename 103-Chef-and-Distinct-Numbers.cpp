#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

void reverse(int arr[], int n)
{
  int start = 0, end = n - 1;

  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

int binarySearch(int arr[], int n, int key)
{
  int low = 0, high = n - 1, mid;
  while (low <= high)
  {
    mid = floor((low + high) / 2);
    if (key == arr[mid])
    {
      return mid;
    }
    else if (key > arr[mid])
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }

  return -1;
}

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

  // int brr[10]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  // for (int i = 0; i < 10; i++)
  // {
  //   cout << brr[i] << " ";
  // }
  // cout << endl;

  // reverse(brr, 10);
  // for (int i = 0; i < 10; i++)
  // {
  //   cout << brr[i] << " ";
  // }
  // cout << endl;

  // cout << binarySearch(brr, 9, 50);

  // int t;
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
