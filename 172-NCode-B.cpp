#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;
    ll ans = 0;

    if (n == 1)
    {
      cout << 2 << endl;
      continue;
    }
    else if (n % 2 == 0)
      cout << n + 1 << endl;
    else
      cout << n + 1 << endl;
  }

  return 0;
}
