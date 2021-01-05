#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
  int n = 0, x = 0;
  vector<string> bit;
  string operation;

  cin>>n;

  for (size_t i = 0; i < n; i++)
  {
    cin>>operation;
    bit.push_back(operation);

    operation = "";
  }

  for (size_t i = 0; i < n; i++)
  {
    if (bit[i] == "x++" || bit[i] == "X++" || bit[i] == "++x" || bit[i] == "++X")
    {
      x++;
    }
    else
    {
      x--;
    }
  }
  
  cout<<x;

  return 0;
}



