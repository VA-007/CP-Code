#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n < 1)
  {
    cout << "Enter a Number greater than 0\n";
  }
  else
  {
    int rem = 0;
    while (n != 1)
    {
      rem += n % 2;
      n = n / 2;
    }

    if (rem == 0)
    {
      cout << "Power of 2\n";
    }
    else
    {
      cout << "NOT a power of 2\n";
    }
  }

  return 0;
}
