#include <iostream>

using namespace std;

int main()
{
  int num = 0, sum = 0, rem = 0; 
  cin>>num;

  do
  {
    rem = num%10;
    sum +=  rem;
    num = num/10;
  } while (num != 0);

  cout<<sum;

  return 0;
}
