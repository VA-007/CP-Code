#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define maxn 100000000000017
#define endl "\n"
#define mk make_pair
#define pll pair<ll, ll>
#define vll vector<ll>
#define vld vector<ld>
#define vpll vector<ppl>
#define ff first
#define ss second
#define pb push_back

#define o(...)                      \
  if (local == 'L')                 \
  {                                 \
    __f(#__VA_ARGS__, __VA_ARGS__); \
    cout << endl;                   \
  }

#define Ns 1000007

typedef long long ll;
typedef long double ld;

char local = 'O';

////////////////#####################INPUT###############///////////////////////

template <typename T>
void read(T &p)
{
  cin >> p;
}

template <typename T, typename T1>
void read(pair<T, T1> &p)
{
  read(p.ff);
  read(p.ss);
}

template <typename T>
void read(T arr[], ll n)
{
  for (ll i = 0; i < n; i++)
  {
    read(arr[i]);
  }
}

template <typename T>
void read(vector<T> &arr)
{
  for (ll i = 0; i < arr.size(); i++)
  {
    read(arr[i]);
  }
}

////////////////#####################OUPUT###############///////////////////////

template <typename T>
void out(T &n)
{
  cout << n;
}

template <typename T, typename T1>
void out(pair<T, T1> &p)
{
  cout << "(";
  out(p.ff);
  cout << ",";
  out(p.ss);
  cout << ")";
}

template <typename T>
void out(T arr[], ll n)
{
  for (ll i = 0; i < n; i++)
  {
    out(arr[i]);
    cout << " ";
  }
}

template <typename T>
void out(vector<T> &arr)
{

  cout << "[ ";
  for (ll i = 0; i < arr.size(); i++)
  {
    out(arr[i]);
    if (i != arr.size() - 1)
      cout << ", ";
  }
  cout << " ]";
}

template <typename T>
void out(set<T> &arr)
{
  for (auto i : arr)
  {
    out(i);
    cout << " ";
  }
}

template <typename T, typename T1>
void out(map<T, T1> &m)
{
  for (auto i : m)
  {
    out(i.first);
    cout << " -> ";
    out(i.second);
    cout << ", ";
  }
}

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
  cout << name << " : ";
  out(arg1);
}

template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args)
{
  const char *comma = strchr(names + 1, ',');
  cout.write(names, comma - names) << " : ";
  out(arg1);
  cout << " | ";
  __f(comma + 1, args...);
}

///###FOR LOOP###///
#define f(a, b) for (ll i = a; i < b; i++)
#define fr(a, b) for (ll j = a; j >= b; j--)
#define fi(a, b) for (ll j = a; j < b; j++)
#define fii(a, b) for (ll k = a; k < b; k++)

////////////////////////////////////END TEMPLATE//////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void solve()
{
  ll n;
  cin >> n;

  ll f[n], c[n];
  f(0, n) cin >> f[i];
  f(0, n) cin >> c[i];

  vector<pll> a;
  f(0, n)
  {
    a.push_back({c[i], f[i]});
  }

  sort(a.begin(), a.end());
  ll num = n;
  ll i = 0;
  ll ans = 0;
  while (num)
  {
    if (num >= a[i].second)
    {
      num -= a[i].second;
      ans += a[i].second * a[i].first;
      i++;
    }
    else
    {
      ans += num * a[i].first;
      num = 0;
    }
  }
  cout << ans << endl;
}

int main()
{
#ifdef LOCAL
  local = 'L';
  time_t start, end;
  time(&start);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t1;

  t1 = 1;

  cin >> t1;

  while (t1--)
  {
    solve();
  }

#ifdef L
  time(&end);
  double time_taken = double(end - start);
  cout << endl
       << endl
       << endl
       << "Time taken by program is : " << fixed
       << time_taken << setprecision(6);
  cout << " sec " << endl;
#endif
}
