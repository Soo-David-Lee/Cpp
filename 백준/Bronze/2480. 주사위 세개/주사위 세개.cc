#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int x, y, z;
   cin >> x >> y >> z;

   if(x == y && y == z){
      cout << 10000 + x * 1000;
   }

   else if(x == y || y == z || z == x){
      cout << 1000 + (x == y ? x : z) * 100;
   }

   else {
      cout << max(x, max(y, z)) * 100;
   }
}