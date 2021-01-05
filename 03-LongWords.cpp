#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, mid;
  vector<string> words;
  string temp;
  cin >> n;

  for (size_t i = 0; i < n; i++)
  {
    cin >> temp;
    words.push_back(temp);

    temp = "";
  }

  for (size_t i = 0; i < n; i++)
  {
    if (words[i].size() > 10)
    {
      mid = words[i].size() - 2;
      words[i] = (words[i][0]) + to_string(mid) + (words[i].back());

      cout << words[i] << endl;

      mid = 0;
    }
    else
    {
      cout << words[i] << endl;
    }
  }

  return 0;
}