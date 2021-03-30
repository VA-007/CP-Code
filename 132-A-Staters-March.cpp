#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll r,o,c;
  cin>>r>>o>>c;

  int win = r-c;

  int temp = 20-o;

  if (temp*6*6 >= win)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }
  
  

  return 0;
}
