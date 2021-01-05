#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int t;
  cin>>t;

  while (t--)
  {
    int n,temp;
    cin>>n;
    vector<int> pir;
    for (size_t i = 0; i < n; i++)
    {
      cin>>temp;
      pir.push_back(temp);
    }

    int small = 0;
    for (size_t i = 0; i < pir.size(); i++)
    {
      if (small<pir[i])
      {
        small = pir[i];
      }
      
    }
    
    
  }
  

  return 0;
}
