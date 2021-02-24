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
  int t;
  cin >> t;

  while (t--)
  {
    string time = "", timeAmPm = "";
    cin >> time >> timeAmPm;



    if (timeAmPm == "PM" && (time.substr(0, 2) != "12"))
    {
      string temp = time.substr(0, 2);
      int tempInt = stoi(temp);
      tempInt += 12;
      temp = to_string(tempInt);

      time.erase(0, 2);
      temp += time;
      time = temp;
    }
    else if (timeAmPm == "AM" && (time.substr(0, 2) == "12"))
    {
      time.erase(0, 2);
      time = "00" + time;
    }



    // cout << time << " ";



    int n;
    cin >> n;
    vector<string> lTimes(n), lTimesAmPm(n), rTimes(n), rTimesAmPm(n);

    string ans = "";
    for (int i = 0; i < n; i++)
    {
      cin >> lTimes[i] >> lTimesAmPm[i];
      cin >> rTimes[i] >> rTimesAmPm[i];



      if (lTimesAmPm[i] == "PM" && (lTimes[i].substr(0, 2) != "12"))
      {
        string temp = lTimes[i].substr(0, 2);
        int tempInt = stoi(temp);
        tempInt += 12;
        temp = to_string(tempInt);

        lTimes[i].erase(0, 2);
        temp += lTimes[i];
        lTimes[i] = temp;
      }
      else if (lTimesAmPm[i] == "AM" && (lTimes[i].substr(0, 2) == "12"))
      {
        lTimes[i].erase(0, 2);
        lTimes[i] = "00" + lTimes[i];
      }



      if (rTimesAmPm[i] == "PM" && (rTimes[i].substr(0, 2) != "12"))
      {
        string temp = rTimes[i].substr(0, 2);
        int tempInt = stoi(temp);
        tempInt += 12;
        temp = to_string(tempInt);

        rTimes[i].erase(0, 2);
        temp += rTimes[i];
        rTimes[i] = temp;
      }
      else if (rTimesAmPm[i] == "AM" && (rTimes[i].substr(0, 2) == "12"))
      {
        rTimes[i].erase(0, 2);
        rTimes[i] = "00" + rTimes[i];
      }

      // cout << lTimes[i] << " " << rTimes[i] << endl;



      if (lTimes[i] <= time && rTimes[i] >= time)
      {
        ans += '1';
      }
      else
      {
        ans += '0';
      }
    }



    cout << ans << endl;
  }

  return 0;
}