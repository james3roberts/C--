#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

   double milesGallon; // total miles 
   double dollarsGallon; // cost per gallon
  
   
   cout << setprecision(2) << fixed; //limit to 2 decimal places.
   cin >> milesGallon; //save miles
   cin >> dollarsGallon; // Save cost of gas
   cout <<  20/milesGallon*dollarsGallon <<" ";// Total for a 20 mile trip 
   cout <<  75/milesGallon*dollarsGallon <<" ";// Total for a 75 mile trip 
   cout <<  500/milesGallon*dollarsGallon <<endl;// Total for a 500 mile trip 
   
   return 0;
}