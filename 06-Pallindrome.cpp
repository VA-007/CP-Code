#include <iostream>

using namespace std;

int main()
{
  int num = 0, rev = 0, rem = 0; 
  cin>>num;
  int compare = num;

  do
  {
    rem = num%10;
    rev = (rev*10) + rem;
    num = num/10;
  } while (num != 0);

  if (rev == compare)
  {
    cout<<"The given number is a pallindrome";
  }
  else
  {
    cout<<"The given number is not a pallindrome";
  }

  return 0;
}
