#include <iostream>
#include<string>

using namespace std;

int main()
{
  int pos = 0;
  string dyc = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm "; 
  string enc = "mnbvcxzlkjhgfdsapoiuytrewqMNBVCXZLKJHGFDSAPOIUYTREWQ#";

  string sample;
  getline(cin,sample);

  cout<<"Encrypting... \n";
  for (size_t i = 0; i < sample.size(); i++)
  {
    pos = dyc.find(sample[i]);
    if (!(pos  == string::npos))
    {
      sample[i] = enc[pos];
    }

    pos = 0;
  }

  cout<<sample<<endl;
  
  cout<<"Decrypting...\n";

  for (size_t i = 0; i < sample.size(); i++)
  {
    pos = enc.find(sample[i]);

    if (!(pos == string::npos))
    {
      sample[i] = dyc[pos];
    }
    
    pos = 0;
  }
  
  cout<<sample;

  return 0;
}
