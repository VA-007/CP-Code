#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;
  string str[n], left[n], right[n];
  char temp;

  // reading imput
  for (size_t i = 0; i < n; i++)
  {
    cin >> str[i];
    left[i] = str[i];
    right[i] = str[i];
  }

  for (size_t i = 0; i < n; i++) {
    temp = str[i][0];

    // left-shift-array
    for (size_t j = str[i].size(); j > 0; j--) {
      left[i][j - 1] = str[i][j];
    }
    left[i].back() = temp;

    // right-shift-array
    temp = str[i].back();
    for (size_t k = 0; k < str[i].size(); k++) {
      right[i][k + 1] = str[i][k];
    }
    right[i].front() = temp;

    // compare
    if (left[i] == right[i]) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }

  return 0;
}
