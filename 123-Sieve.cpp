#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

vector<int> sieve(int n)
{
  vector<int> ans;
  vector<int> temp(n, 0);

  for (int i = 2; i * i <= n; i++)
  {
    if (temp[i] == 0)
    {
      for (int j = i * i; j <= n; j += i)
      {
        temp[j]++;
      }
    }
  }
  for (int i = 2; i <= n; i++)
  {
    if (temp[i] == 0)
    {
      ans.push_back(i);
      if (ans.size() == n)
        return ans;
    }
  }

  return ans;
}

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> primes = sieve(11);
  for (int i = 0; i < primes.size(); i++)
  {
    cout << primes[i] << " ";
  }

  return 0;
}
