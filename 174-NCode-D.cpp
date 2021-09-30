#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

bool find(vector<string> vec, string key) {
  for (size_t i = 0; i < count; i++)
  {
    /* code */
  }
  
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin >> t;

  while (t--)
  {
    int n, m, q;
    cin >> n >> m >> q;

    vector<string> chars;
    for (int i = 0; i < n; i++)
      cin >> chars[i];

    unordered_map<string, vector<string>> mp;
    for (int i = 0; i < m; i++)
    {
      string from, to;
      cin >> from >> to;

      mp[from].push_back(to);
    }

    int q;
    while (q--)
    {
      string from, to;
      cin >> from >> to;


    }
  }

  return 0;
}
