#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;

  cout << "Enter your string: ";

  cin >> str;

  cout << "The pyramaid is- \n\n";

  for (int i = 0; i < str.size(); i++)
  {
    string spaces(str.size() - i - 1, ' ');

    cout << spaces;

    for (int j = 0; j <= i; j++)
    {
      cout << str[j];
    }

    for (int k = (i - 1); k >= 0; k--)
    {
      cout << str[k];
    }

    cout << endl;
  }

  cout << endl;

  return 0;
}
