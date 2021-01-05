#include <iostream>
#include <string>

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
    string s;
    cin >> s;

    string a;
    a = s;
    for (size_t i = 0; i < s.length()-1; i++)
    {
      string b = a.substr(0, i);
      cout<<b<<endl;
      a.erase(0, i);

      if (a.find(b) != string::npos && a + b == s)
      {
        cout << "YES\n";
        break;
      }
      else
      {
        cout << "NO\n";
      }

      a = s;
    }
  }

  return 0;
}
