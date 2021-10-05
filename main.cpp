#include<iostream>
using namespace std;

int main() {

   long long int n, r, ld = 0;

   cin>>n;

   while (n > 0) {
       r = n % 10;
       if (ld < r) {
           ld = r;
       }
       n = n / 10;
   }
   cout << ld;

   return 0;
}
