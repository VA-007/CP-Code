#include <iostream>
#include <string>

using namespace std;

int main()
{
  string n;

  cin >> n;

  if (n.size() > 3)
  {
    cout << "More than 3 digits";
  }
  else
  {
    cout << n.size();
  }

  return 0;
}
