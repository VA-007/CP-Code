#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;
  string str[n], right[n];
  char temp;

  // reading imput
  for (size_t i = 0; i < n; i++)
  {
    cin >> str[i];
    left[i] = str[i];
    right[i] = str[i];
  }

  // rotation
  for (size_t k = 0; k < str[i].size(); k++)
  {
    temp = str[i].back();
    right[i][k + 1] = str[i][k];
  }
  right[i].front() = temp;
}

return 0;
}
