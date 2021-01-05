#include <iostream>
#include <string>

using namespace std;


int main()
{
  int n, t = 1;
  cin >> n;

  for (size_t i = 1; i <= n; i++)
  {
    for (size_t j = 1; j <= i; j++)
    {
      cout << t << " ";
      t++;
    }

    cout << "\n";
  }

  return 0;
}


// #include <iostream>
// using namespace std;

// Pattern 1
// int main()
// {
//   int rows;

//   cout << "Enter number of rows: " << endl;
//   cin >> rows;

//   for (int i = 1; i <= rows; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << "* ";
//     }
//     cout << "\n";
//   }
//   return 0;
// }

// Pattern 2
// int main()
// {
//   int n;

//   cout << "Enter number of rows: " << endl;
//   cin >> n;

//   for (int i = n; i >= 1; i--)     // i = 4
//   {
//     for (int j = 1; j <= i; ++j)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   return 0;
// }
