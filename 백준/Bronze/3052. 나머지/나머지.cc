#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int a[42] = {};
   int n;
   
   for (int i = 0; i < 10; i++){
      cin >> n;
      a[n % 42]++;
   }
   int count = 0;
   for(int i = 0; i < 42; i++){
      if(a[i] > 0){
         count++;
      } 
   }
   cout << count;
   
}