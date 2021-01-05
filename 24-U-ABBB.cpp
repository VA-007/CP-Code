#include <iostream>
#include <string>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    string ab = "AB", bb = "BB";
    int pos1 = string::npos;
    int pos2 = string::npos;

    while ((pos1 = s.find(ab)) != string::npos)
    {
      if (pos1 == 0)
      {
        s.erase(pos1, pos1 + 2);
      }
      else
      {
        s.erase(pos1, pos1 + 1);
      }
    }
    while ((pos2 = s.find(bb)) != string::npos)
    {
      if (pos2 == 0)
      {
        s.erase(pos2, pos2 + 2);
      }
      else
      {
        s.erase(pos2, pos2 + 1);
      }
    }

    cout << s.length() << endl;
  }

  return 0;
}
