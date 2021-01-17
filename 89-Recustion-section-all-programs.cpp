#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

void fun(int n)
{
  if (n > 0)
  {
    cout << n << " ";
    fun(n - 1);
    fun(n - 1);
  }
}

int power(int m, int n)
{
  if (n > 0)
    return power(m, n - 1) * m;

  return 1;
}


double tylorSeries(int x, int n)
{
  static double p = 1, f = 1;
  double r = 0;

  if (n > 0)
  {
    r = tylorSeries(x, n - 1);
    p *= x;
    f *= n;

    return (p / f) + r;
  }

  return 1;
}


double tylorHorner(double x, double n)
{
  static double r = 1;

  if (n > 0)
  {
    r = 1 + ((x / n) * r);

    return tylorHorner(x, n - 1);
  }

  return r;
}


double tylorHornerIterative(double x, double n)
{
  static double r = 1;

  for (; n > 0; n--)
  {
    r = 1 + ((x / n) * r);
  }

  return r;
}


ll fibIterative(int n)
{
  if (n <= 1)
  {
    return n;
  }

  ll f1 = 0, f2 = 1, f3 = 0;
  for (int i = 2; i <= n; i++)
  {
    f3 = f1 + f2;
    f1 = f2;
    f2 = f3;
  }
  return f3;
}


ll fibRecursive(int n)
{
  ll f1 = 0, f2 = 1;

  if (n <= 1)
  {
    return n;
  }

  return fibRecursive(n - 2) + fibRecursive(n - 1);
}


ll fibMemoization(int n)
{
  static vector<int> f(n, -1);

  if (n <= 1)
  {
    f[n] = n;
    return n;
  }

  if (f[n - 2] == -1)
  {
    f[n - 2] = fibMemoization(n - 2);
  }

  if (f[n - 1] == -1)
  {
    f[n - 1] = fibMemoization(n - 1);
  }

  return f[n - 2] + f[n - 1];
}


int nCr(int n, int r)
{
  if (r == 0 || n == r)
  {
    return 1;
  }

  return nCr(n - 1, r - 1) + nCr(n - 1, r);
}


void towerOfHanoi(int n, int a, int b, int c)
{
  if (n > 0)
  {
    towerOfHanoi(n - 1, a, c, b);

    cout << "Move from " << a << " to " << c << endl;

    towerOfHanoi(n - 1, b, a, c);
  }
}

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 3;

  // fun(n);

  // cout << power(2, 5);

  // cout << tylorSeries(4, 4) << endl;
  // cout << tylorHorner(4, 4) << endl;
  // cout << tylorHornerIterative(4, 4);

  // cout << fibIterative(7) << endl;
  // cout << fibRecursive(7) << endl;
  // cout << fibMemoization(7);

  // cout << nCr(5, 3);

  towerOfHanoi(3, 1, 2, 3);

  return 0;
}

