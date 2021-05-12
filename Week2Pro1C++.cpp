#include <iostream>
#include <string>
using namespace std;

int main() {
   string ran1; // hold 1 string
   int ran2;// hold 1 number

   
   while (cin >> ran1 >>ran2){
      if (ran1 =="quit" && ran2 == 0) break;
      cout <<"Eating "<< ran2<<" " << ran1 << " a day keeps you happy and healthy." <<endl;
      
     
   }
   

   return 0;
}
