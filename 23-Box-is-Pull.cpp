#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    long long Xdiff = abs(x1 - x2);
    long long Ydiff = abs(y1 - y2);

    long long time = Xdiff + Ydiff +2;

    if (Xdiff == 0 || Ydiff == 0)
    {
      time -= 2;
    }

    cout << time << endl;
  }

  return 0;
}
