#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (size_t i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    int z = arr.size() - 1;
    while (arr[z] != 1)
    {
      arr.pop_back();
      z--;
    }

    z = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
      if (arr[i] == 1)
      {
        for (size_t j = i+1; j < arr.size()-1; j++)
        {
          if (arr[j] == 0)
          {
            z++;
          }
        }
        break;
      }
    }

    cout << z << "\n";
  }

  return 0;
}
