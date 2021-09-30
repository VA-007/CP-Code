#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin >> t;

  while (t--)
  {
    ll f, n, m, k;
    cin >> f >> n >> m >> k;

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    for (int i = 0; i < k; i++)
    {
      if (s1[i] == '1')
        f--;
      if (s2[i] == '1')
        n--;
      if (s3[i] == '1')
        m--;

      cout << f * m * n << " ";
    }
    cout << endl;
  }

  return 0;
}
