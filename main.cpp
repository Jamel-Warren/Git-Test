#include <iostream>

using namespace std;

int sum(int n);

int main()
{
  cout << "Hello World" << endl;
  cout << "User needs a number n: ";
  int n;
  cin >> n;
  cout << sum(n) << endl;
  
  return 0;
}

int sum(int n)
{
  int total=0;
  for(int i=0; i<n; i++)
    total = total+(i+1);
  return total;
}
