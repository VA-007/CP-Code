// // #include <bits/stdc++.h>

// // #define ll long long
// // #define MOD 1000000007

// // using namespace std;

// // main()
// // {
// //   ios_base::sync_with_stdio(false);
// //   cin.tie(NULL);

// //   ll t;
// //   cin >> t;

// //   while (t--)
// //   {
// //     ll n;
// //     cin >> n;
// //     vector<int> arr(n);
// //     for (int i = 0; i < n; i++)
// //     {
// //       cin >> arr[i];
// //     }

// //     sort(arr.begin(), arr.end());
// //     cout << arr[n - 2] << endl;
// //   }

// //   return 0;
// // }

// // #include <bits/stdc++.h>

// // #define ll long long
// // #define MOD 1000000007

// // using namespace std;

// // main()
// // {
// //   ios_base::sync_with_stdio(false);
// //   cin.tie(NULL);

// //   ll t;
// //   cin >> t;

// //   while (t--)
// //   {
// //     ll n, m, x, y;
// //     cin >> n >> m >> x >> y;

// //     vector<int> arr(m);
// //     for (int i = 0; i < m; i++)
// //     {
// //       cin >> arr[i];
// //     }

// //     sort(arr.begin(), arr.end());
// //     int x1 = arr[0], y1 = arr[m - 1];

// //     if (x1 >= x && y1 <= y)
// //     {
// //       if (x1 == x || y1 == y)
// //       {
// //         cout << "YES" << endl;
// //         continue;
// //       }
// //       else if (x1 > x && y1 < y && n - m >= 2)
// //       {
// //         cout << "YES" << endl;
// //         continue;
// //       }
// //       else if (x1 > x && y1 == y && n - m >= 1)
// //       {
// //         cout << "YES" << endl;
// //         continue;
// //       }
// //       else if (x1 == x && y1 < y && n - m >= 1)
// //       {
// //         cout << "YES" << endl;
// //         continue;
// //       }
// //       else
// //       {
// //         cout << "NO" << endl;
// //         continue;
// //       }
// //     }
// //     else
// //     {
// //       cout << "NO" << endl;
// //     }
// //   }

// //   return 0;
// // }

// // #include <bits/stdc++.h>

// // #define ll long long
// // #define MOD 1000000007

// // using namespace std;

// // main()
// // {
// //   ios_base::sync_with_stdio(false);
// //   cin.tie(NULL);

// //   ll t;
// //   cin >> t;

// //   while (t--)
// //   {
// //     ll n, m, k;
// //     cin >> n >> m >> k;

// //     vector<int> arr(n);
// //     for (int i = 0; i < n; i++)
// //     {
// //       cin >> arr[i];
// //     }

// //     ll ans = 0;

// //     for (int i = 0; i < n; i++)
// //     {
// //       ll coef = n - 1 - i;
// //       ll der = m;

// //       while (arr[i] && der > 0 && coef >= 0)
// //       {
// //         der--;
// //         arr[i] = arr[i] * coef--;
// //       }

// //       if (coef > 0)
// //         ans += (pow(k, coef) * arr[i]);
// //       else if (coef == 0)
// //         ans += arr[i];
// //     }

// //     // ans = accumulate(arr.begin(), arr.end(), 0);
// //     cout << ans << endl;
// //   }

// //   return 0;
// // }

// // #include <bits/stdc++.h>

// // #define ll long long
// // #define MOD 1000000007

// // using namespace std;

// // main()
// // {
// //   ios_base::sync_with_stdio(false);
// //   cin.tie(NULL);

// //   ll t;
// //   cin >> t;

// //   while (t--)
// //   {
// //     ll n;
// //     cin >> n;
// //     string s;
// //     cin >> s;

// //     vector<int> arr(26);
// //     for (int i = 0; i < 26; i++)
// //       cin >> arr[i];

// //     vector<int> arr2(26, 0);

// //     ll low = 0, high = 0;
// //     ll maxlen = 0;
// //     string ans = "";

// //     while (high < n && low < n)
// //     {
// //       if (arr[s[high] - 97] == 0)
// //       {
// //         for (int i = 0; i < 26; i++) // Resetting all the values as new subseq will be taken from here onwards
// //           arr2[i] = 0;

// //         low = high + 1;
// //         high++;
// //       }
// //       else if ((arr2[s[high] - 97] + 1) <= arr[s[high] - 97])
// //       {
// //         arr2[s[high] - 97]++;

// //         if (maxlen < high - low + 1)
// //         {
// //           maxlen = high - low + 1;
// //           ans = s.substr(low, high - low + 1);
// //         }

// //         high++;
// //       }
// //       // else if (s[high] == s[low])
// //       else
// //       {
// //         if (maxlen < high - low)
// //         {
// //           maxlen = high - low;
// //           ans = s.substr(low, high - low);
// //         }

// //         arr2[s[low] - 97]--;
// //         low++;       // as the elements may not be present in order hence we need to remove until we get valid number at arr2's possition
// //         // high++;
// //       }
// //       // else
// //       // {
// //       //   while (low < high && s[low] != s[high])
// //       //   {
// //       //     arr2[s[low] - 97]--;
// //       //     low++;
// //       //   }
// //       // }
// //     }

// //     cout << maxlen << endl;
// //     cout << ans << endl;
// //   }

// //   return 0;
// // }

// #include <bits/stdc++.h>

// #define ll long long
// #define MOD 1000000007

// using namespace std;

// main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   // d = 2
//   // 8 10 12 14 5 15

//   ll t = 0;
//   cin >> t;

//   while (t--)
//   {
//     ll n, d;

//     cin >> n >> d;

//     ll arr[n];

//     for (ll i = 0; i < n; i++)
//       cin >> arr[i];

//     d = d % n;

//     while (d--)
//     {
//       ll temp = arr[0];

//       for (int i = 0; i < n - 1; i++)
//         arr[i] = arr[i + 1];

//       arr[n - 1] = temp;
//     }

//     for (int i = 0; i < n; i++)
//       cout << arr[i] << " ";

//     cout << endl;
//   }

//   return 0;
// }

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long
#define MOD 1000000007

using namespace std;

int sum(vector<int> arr, int i)
{
  if (i < arr.size())
    return arr[i] + sum(arr, ++i);

  return 0;
}

double kmPerLtr(int km, int ltr)
{
  if (!ltr)
    throw 0;
  if (km < 0 || ltr < 0)
    throw string("Negative value Error!");

  return double(km) / ltr;
}

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr{1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

  // cout << "Sum : " << sum(arr, 0);

  // =============>> Smart Pointers <<===============
  // unique_ptr
  // unique_ptr<int> p1{new int{100}};
  // cout << *p1 << endl;
  // *p1 = 200;
  // cout << *p1 << endl;

  // auto p2 = make_unique<double>(400.00);
  // cout << *p2 << endl;

  // shared_ptr
  // shared_ptr<int> p1{new int{100}};
  // cout << p1.use_count() << endl;
  // cout << *p1 << endl;

  // auto p2 = p1;
  // cout << p1.use_count() << " " << p2.use_count() << endl;

  // p1.reset();
  // cout << p1.use_count() << " " << p2.use_count() << endl;

  // p2.reset();
  // cout << p1.use_count() << " " << p2.use_count() << endl;

  // ======================>> Exception Handling Practice <<=========================
  double average = 0;
  try
  {
    average = kmPerLtr(-3, 0);
    cout << average << endl;
  }
  catch (int &err)
  {
    cerr << "Devide by zero error occured!" << endl;
  }
  catch (string &err)
  {
    cerr << err << endl;
  }

  return 0;
}
