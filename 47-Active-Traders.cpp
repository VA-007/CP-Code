#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'mostActive' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY customers as parameter.
 */

vector<string> mostActive(vector<string> customers)
{
  sort(customers.begin(), customers.end());

  int n = customers.size();
  vector<int> numbers(n, 0);
  vector<int> counter;

  int j = 0;
  for (int i = 0; i < n - 1; i++)
  {
    // cout<<customers[i]<<" ";
    if (customers[i] != customers[i + 1])
    {
      numbers[j]++;
      counter.push_back(i);
      j++;
    }
    if (i == n - 2)
    {
      if (customers[i] != customers[n - 1])
      {
        numbers[j]++;
        counter.push_back(i + 1);
      }
    }
    else
    {
      numbers[j]++;
    }
  }

  for (size_t i = 0; i < n; i++)
  {
    cout << numbers[i] << " ";
  }

  j = 0;
  vector<string> ans;
  for (int i = 0; i < numbers.size(); i++)
  {
    if (((numbers[i] * 100) / n) >= 5)
    {
      ans.push_back(customers[counter[j]]);
      j++;
    }
  }

  return ans;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string customers_count_temp;
  getline(cin, customers_count_temp);

  int customers_count = stoi(ltrim(rtrim(customers_count_temp)));

  vector<string> customers(customers_count);

  for (int i = 0; i < customers_count; i++)
  {
    string customers_item;
    getline(cin, customers_item);

    customers[i] = customers_item;
  }

  vector<string> result = mostActive(customers);

  for (int i = 0; i < result.size(); i++)
  {
    fout << result[i];

    if (i != result.size() - 1)
    {
      fout << "\n";
    }
  }

  fout << "\n";

  fout.close();

  return 0;
}

string ltrim(const string &str)
{
  string s(str);

  s.erase(
      s.begin(),
      find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

  return s;
}

string rtrim(const string &str)
{
  string s(str);

  s.erase(
      find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
      s.end());

  return s;
}
