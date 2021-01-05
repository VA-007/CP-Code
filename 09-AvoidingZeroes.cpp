#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  int temp = 0;
  vector<int> vec;
  vector<int> vecSize{n};

  cin << n;

  for (int i = 0; i < n; i++)
  {
    cin << vecSize[i];

    for (size_t j = 0; j < vecSize[i]; j++)
    {
      cin<<temp;
      vec.push_back(temp);
    }
    
  }

  return 0;
}
