#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define int long long

using namespace std;

// main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   int t;
//   cin >> t;

//   while (t--)
//   {
//     int n;
//     cin >> n;
//     vector<int> arr(n);

//     for (int i = 0; i < n; i++)
//     {
//       cin >> arr[i];
//     }

//     bool flag = true;
//     for (int i = 0; i < n; i += 6)
//     {
//       if (arr[i] == 1)
//       {
//         for (int j = i + 1; j < i + 6; j++)
//         {
//           if (arr[j] == 0)
//           {
//             continue;
//           }
//           else
//           {
//             flag = false;
//             break;
//           }
//         }
//         else
//         {
//           break;
//         }
//       }

//       if (flag == false)
//       {
//         break;
//       }
//     }

//     if (flag == true)
//     {
//       cout << "YES";
//     }
//     else
//     {
//       cout << "NO";
//     }

//     cout << endl;
//   }

//   return 0;
// }

vector<long> findSum(vector<int> numbers, vector<vector<int>> queries)
{
  vector<long> ans;
  long sum = 0;

  for (size_t i = 0; i < queries.size(); i++)
  {
    sum = 0;
    for (size_t j = queries[i][0] - 1; j <= queries[i][1] - 1; j++)
    {
      if (numbers[j] == 0)
      {
        sum += queries[i][2];
      }
      else
      {
        sum += numbers[j];
      }
    }

    ans.push_back(sum);
  }

  return ans;
}
