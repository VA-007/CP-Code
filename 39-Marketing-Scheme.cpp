#include <iostream>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    long long l, r, a = 0;
    cin >> l >> r;

    if ((r - l) >= l)
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n";
    }
  }

  return 0;
}