#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int max, x = 0;

   int arr[9];
   for (int i = 0; i < 9; i++){
       cin >> arr[i];
   }

   max = arr[0];
   for (int i = 1; i < 9; i++){
      if (arr[i] > max){
      max = arr[i];

      x = i; 
      }
   }
   cout << max << endl;
   cout << x + 1; 
   return 0;
}