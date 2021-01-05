#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    long long a, b;

    cin >> a >> b;

    // Ideal Method
    long long x = a^b;
    cout<<x<<endl;


    // Not Ideal Method (My Method)
    // long long diff = abs(a - b);

    // if (diff == 0)
    // {
    //   cout << 0 << endl;
    // }
    // else
    // {
    //   long long num = 0, temp = ((a ^ 0) + (b ^ 0));
    //   for (long long i = 0; i <= diff; i++)
    //   {
    //     num = (a ^ i) + (b ^ i);
    //     if (num < temp)
    //     {
    //       temp = num;
    //     }
    //   }

    //   cout << temp << endl;
    // }
  }

  return 0;
}
