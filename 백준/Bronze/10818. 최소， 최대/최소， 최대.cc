#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n, a;
   cin >> n;

   int min = 1000000, max = -1000000;
   for (int i = 0; i < n; i++){
       cin >> a;
       if (a < min) min = a;
       if (a > max) max = a;
   }

   cout << min << " " << max;
}