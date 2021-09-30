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
    int n;
    cin >> n;
    int b = n, w = n;

    // vector<string> ans;
    // string ds;

    // eval(0, b, w, ds, ans);

    // int count = 0
    // for (int i = 0; i < ans.size(); i++)
    // {
    //   if(ans[i][n-1] == 'B') count++;
    // }

    if (n % 2 == 0)
      cout << n << " " << n - 1 << endl;
    else 
      cout << n << " " << n << endl;
  }

  return 0;
}
