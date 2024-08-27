#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;
   int arr[100];

   for (int i = 1; i <= n; i++){
      arr[i] = i;
   }
   
       for (int j = 0; j < m; j++){
           int a, b, temp;
         cin >> a >> b;
          temp = arr[a];
          arr[a] = arr[b];
          arr[b] = temp;
   }
   
   for (int k = 1; k <= n; k++){
      cout << arr[k] << " ";
   }
   
}