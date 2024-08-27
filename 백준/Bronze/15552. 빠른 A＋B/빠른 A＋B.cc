#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n;
   int a, b;

   cin >> n;
   cin.tie(NULL);
   ios::sync_with_stdio(false);
   for (int i = 0; i < n; i++){
      cin >> a >> b;

      cout << a + b << "\n";
   }
}