#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int binary[50];

  if (n < 0)
  {
    cout << "Please enter a possitive integer\n";
  }
  else if (n == 0)
  {
    cout << 0;
  }
  else
  {
    int i = 0;
    while (n != 0)
    {
      binary[i] = n % 2;
      n = n / 2;
      i++;
    }

    while (i--)
    {
      cout << binary[i];
    }
  }

  return 0;
}
