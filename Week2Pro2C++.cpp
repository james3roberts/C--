#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon){ // Make variables.
return (drivenMiles/milesPerGallon)*dollarsPerGallon; //Tell what we want the function to do. 
}

int main() {
   double milesPerGallon; // call the variable
   double dollarsPerGallon;//Call the variable
   cin >>milesPerGallon; // get the input
   cin >>dollarsPerGallon; //get the input
   double ten = DrivingCost(10,milesPerGallon,dollarsPerGallon); // Do the math for given distance
   double fifty = DrivingCost(50,milesPerGallon,dollarsPerGallon);// Do the math for given distance
   double four = DrivingCost(400,milesPerGallon,dollarsPerGallon);// Do the math for given distance
   cout << fixed << setprecision(2); // set deccimal places
   cout << ten<< " "; // output cost
   cout << fifty <<" "; // output cost
   cout << four <<endl;// output cost
   return 0;
}