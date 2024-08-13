#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n, x;

   cin >> n;
   
   cin >> x;

   int arr[n];
   for (int i = 0; i < n; i ++)
      cin >> arr [i];
   
   for(int i = 0; i < n; i ++)
      {
         if(arr[i] < x)
         cout << arr[i] << " ";
      }
 
}