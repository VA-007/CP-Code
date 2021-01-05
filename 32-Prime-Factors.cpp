#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  for (size_t i = 2; i <= n / 2; i++)
  {
    int factor = 0;
    if (n % i == 0)
    {
      factor = i;
    }

    if (factor > 0)
    {
      int t = 2;
      for (size_t j = 2; j <= factor / 2; j++)
      {
        if (factor % j == 0)
        {
          t++;
        }
      }

      if (t == 2)
      {
        cout << factor << " ";
      }
    }
  }

  return 0;
}
