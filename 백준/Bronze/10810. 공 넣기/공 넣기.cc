#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;
   int a[100] = {0, };
   int x, y, z;

   for (int i = 0; i < m; i ++){
      cin >> x >> y >> z;
      for(int j = x; j <= y; j++){
         a[j - 1] = z;
      }
      }
   for (int i = 0; i < n; i++){
      cout << a[i] << " ";
   }
}