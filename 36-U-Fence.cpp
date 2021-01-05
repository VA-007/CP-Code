#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long a, b, c, d;
    cin >> a >> b >> c;

    if (a + b <= c)
    {
      d = abs((a + c) - b);
    }
    else if (a + c <= b)
    {
      d = abs((a + c) - b);
    }
    

    cout << d << "\n";
  }

  return 0;
}
