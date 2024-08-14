#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n;
   cin >> n;
   cout << "int a;" << endl;
   for (int i = 0; i < n; i++){
      cout << "int " << string(i + 1, '*') << "ptr" << (i ==0 ? "" : to_string(i+1)) << " = &";
      if (i == 0) {
         cout << "a;" << endl;
      }
      else {
         cout << "ptr" << (i == 1 ? "" : to_string(i)) << ";" << endl;
      }
         
   }
   
}