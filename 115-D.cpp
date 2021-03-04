#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

int isSubstring(string s1, string s2)
{
  int M = s1.length();
  int N = s2.length();

  /* A loop to slide pat[] one by one */
  for (int i = 0; i <= N - M; i++)
  {
    int j;

    /* For current index i, check for
 pattern match */
    for (j = 0; j < M; j++)
      if (s2[i + j] != s1[j])
        break;

    if (j == M)
      return i;
  }

  return -1;
}

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // ll t = 0;
  // cin >> t;

  // while (t--)
  // {
  //   ll n, c;
  //   cin >> n >> c;

  //   string s;
  //   cin >> s;

  //   string zeroes(c + 2, '0');
  //   if (isSubstring(zeroes, s) != -1)
  //   {
  //     cout << "NO" << endl;
  //     continue;
  //   }

  //   string zeroes2(c + 1, '0');
  //   if (isSubstring(zeroes2, s) != -1)
  //   {
  //     std::string::size_type i = s.find(zeroes2);

  //     if (i != std::string::npos)
  //       s.erase(i, zeroes2.length());

  //     if (isSubstring(zeroes2, s) != -1)
  //     {
  //       cout << "NO" << endl;
  //       continue;
  //     }
  //   }

  //   cout << "YES" << endl;
  // }

  // int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // for (int i = 0; i < 10; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // cout << endl;

  // int temp = arr[0], i = 0;
  // while (i < 9)
  // {
  //   arr[i] = arr[i + 1];
  //   i++;
  // }
  // arr[9] = temp;

  // for (int i = 0; i < 10; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // cout << endl;

  // int arr[11]{1, 2, 3, 4, 5, 7, 8, 9, 10};
  // for (int i = 0; i < 10; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // cout << endl;
  // int insert = 6, i = 8;
  // while (arr[i] > insert)
  // {
  //   arr[i + 1] = arr[i];
  //   i--;
  // }
  // arr[i + 1] = insert;

  // for (int i = 0; i < 10; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // cout << endl;

  int arr[10]{-1, -2, -3, 4, 5, 7, -8, 9, -10, 8};

  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  int i = 0, j = 9;
  while (i < j)
  {
    while (arr[i] < 0)
    {
      i++;
    }
    while (arr[j] >= 0)
    {
      j--;
    }

    if (i < j)
    {
      int temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
    }
  }

  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
