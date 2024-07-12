#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;

   for(int i = 1; i < n ; i++){
      for(int k = 0 ; k < n-i ; k++){
         cout <<" ";
      }
      for (int j = 0 ; j < i+(i-1) ; j++){
         cout << "*";
      }
      cout << "\n";
   }
  for(int z = 1; z < 2 * n; z++){
     cout << "*";
  }
   cout << "\n";
   
  for(int i = n; i > 1; i--){
     for(int j = 0; j < n - i+1; j++){
         cout << " ";
  }
     for (int j = 2; j < 2 * i - 1 ; j++){
          cout << "*";
     }
        
     cout << "\n";

  
  }
}