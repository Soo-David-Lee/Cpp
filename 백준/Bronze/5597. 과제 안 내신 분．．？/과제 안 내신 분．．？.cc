#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int num;
   int arr[31] = {};
   for (int i = 0; i < 28; i++){
      cin >> num;
      arr[num] = 1;
   }
   for (int i = 1; i <= 30; i++){
      if (arr[i] == 0){
         cout << i << endl;
      }
   }
}