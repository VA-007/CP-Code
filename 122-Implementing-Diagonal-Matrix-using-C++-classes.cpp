#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

class matrix
{
  int n;
  int *arr;

public:
  static int objCount;

  matrix()
  {
    n = 2;
    arr = new int[n];
    objCount++;
  }

  matrix(int size)
  {
    n = size;
    arr = new int[n];
    objCount++;
  }

  ~matrix()
  {
    delete[] arr;
    objCount--;
  }

  void set(int i, int j, int element)
  {
    if (i == j)
      arr[i] = element;
  }

  void display()
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == j)
          cout << arr[i] << " ";
        else
          cout << 0 << " ";
      }
      cout << endl;
    }
  }

  void displayObjCount()
  {
    cout << objCount << endl;
  }
};

void decimalToBinary(int n)
{
  if (n == 0)
  {
    cout << 0;
  }
  else
  {
    decimalToBinary(n / 2);
    cout << n % 2;
  }
}

int matrix::objCount = 0;

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // matrix m;
  // m.displayObjCount();
  // matrix m1;
  // m1.displayObjCount();
  // matrix m2;
  // m1.displayObjCount();

  // m1.set(0, 0, 23);
  // m1.set(1, 1, 23);
  // m1.set(2, 2, 23);

  // m.display();

  
  // decimalToBinary(9);

  return 0;
}
