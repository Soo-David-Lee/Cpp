#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int a;
   cin >> a;

   for (int i = 0; i < a; i++){
      string s;
      cin >> s;
      int length = s.length();

      cout << s[0] << s[length - 1] << endl;
   }
   
}