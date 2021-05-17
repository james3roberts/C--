/*
 * Calculator.cpp
 *
 *  Date: [05/12/2021]
 *  Author: [James Roberts]
 */

#include <iostream>


using namespace std;

int  main() // Changed void to int to be able to get numbers. 
{
	// char statement[100]; //This statement does not belong and should be deleted. comment out for homework.  
	double op1, op2; // changed from int to double to get decimals
	char operation; // To save the operator
	char answer = 'Y'; // Changed from double quotes to single quotes, Added a semicolon
		while (answer == 'y'|| answer == 'Y') // added the upper and lower case y. 9/13
		{
			cout << "Enter expression" << endl; // get expression.
			cin >> op1 >> operation >> op2; // get the input.

			if (operation == '+')  // Changed from double quotes to single quotes and check to see it the problem is addition 
			cout << op1 << "+" << op2 << " = " << op1 + op2 << endl; // Print to sum. Changed >> to <<. 

            if (operation == '-') //Added this substraction statement. Check to see if the problem is subtraction. 
			cout << op1 << "-"  << op2 << " = " << op1 - op2 << endl;// Changed >> to << 

			if (operation == '*') // Check to see if problem is multiplication
			cout << op1 << "*" << op2 << " = " << op1 * op2 << endl;//Fixed spacing of following statements. Changed the division to multiplication. 

			if (operation == '/') // check to see if problem is division. 
			cout << op1 << "/" << op2 << " = " << op1 / op2 << endl;// Changed the multiplication to division. 

			cout << "Do you wish to evaluate another expression? " << endl; //Ask if they want another problem.
			cin >> answer; // save the answer.
            
			if (answer == 'N'|| answer == 'n')
			cout << "Program Finished" << endl;
         }
         

        
    return 0;  // Added the return statement.
}
