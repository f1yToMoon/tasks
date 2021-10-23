#include <iostream>

using namespace std;

int main() {
   int a = 333;
   auto f = [&a](){
       a = a + 666;
   };
   cout << f();
   return 0;
}
