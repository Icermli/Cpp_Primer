#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
  vector<string> vec;
  for (string str; cin >> str; vec.push_back(str))
  {
    cout << vec.capacity() << endl;
  }

  return 0;
}
