#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  cin >> str;

  if (str.size() == 1)
  {
    cout << str;
  }
  else
  {
    for (size_t i = 0; i < (str.size() - 2); i += 2)
    {
      for (size_t j = 0; j < (str.size() - i - 2); j++)
      {
        if (str[j] > str[j + 2])
        {
          swap(str[j], str[j + 2]);
        }
      }
    }
    cout << str;
  }

  return 0;
}
