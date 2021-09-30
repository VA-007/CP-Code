#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long
#define MOD 1000000007

using namespace std;

void display(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}

void merge(vector<int> &arr, int low, int mid, int high)
{
  int i = low, j = mid + 1, k = low;

  vector<int> temp(high + 1);

  while (i <= mid && j <= high)
  {
    if (arr[i] < arr[j])
      temp[k++] = arr[i++];
    else
      temp[k++] = arr[j++];
  }

  while (i <= mid)
    temp[k++] = arr[i++];

  while (j <= high)
    temp[k++] = arr[j++];

  for (int i = low; i <= high; i++)
    arr[i] = temp[i];
}

void mergeSort(vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
  }
}

// --> Recursive reverse of a string
void reverse(string &s, int low, int high)
{
  if (low < high)
  {
    swap(s[low], s[high]);
    reverse(s, low + 1, high - 1);
  }
}

int partition(vector<int> &arr, int low, int high)
{
  int pivot = arr[low];
  int i = low, j = high;

  do
  {
    do
    {
      i++;
    } while (i <= j && arr[i] <= pivot);
    do
    {
      j--;
    } while (i <= j && arr[j] > pivot);

    if (i <= j)
      swap(arr[i], arr[j]);
  } while (i <= j);

  swap(arr[low], arr[j]);

  return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot);
    quickSort(arr, pivot + 1, high);
  }
}

vector<int> sieve(int n)
{
  vector<int> arr(1000, 0);

  for (int i = 2; i * i < arr.size(); i++)
  {
    if (arr[i] == 0)
    {
      for (int j = i * i; j < arr.size(); j += i)
        arr[j] = 1;
    }
  }

  vector<int> ans;
  for (int i = 2; i < arr.size() && n; i++)
  {
    if (arr[i] == 0)
    {
      ans.push_back(i);
      n--;
    }
  }

  return ans;
}

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr{7, 8, 6, 5, 1, 0, 3};
  // display(arr);
  // mergeSort(arr, 0, arr.size() - 1);
  // quickSort(arr, 0, arr.size());
  // display(arr);

  // string s1 = "Vishank Sharma";
  // cout << s1 << endl;
  // reverse(s1, 0, s1.size() - 1);
  // cout << s1 << endl;

  vector<int> ans = sieve(20);
  display(ans);

  return 0;
}
