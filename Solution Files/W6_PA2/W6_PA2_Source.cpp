//This program uses a recursive function to add all the integers between 1 and a number passed to the function as an argument.
//It is designed to give an example to the user of how the function works, and then be interactive from that point.
//The user can continue to input as many values as they would like.
#include <iostream>
using namespace std;

//Function prototype
int add(int);

int main()
{
	int number;		//To get the user's input
	double temp;	//To prevent floating-point issues
	char again;		//Do-while loop to repeat the program

	cout << "This program will add all the integer values between 1 and a number of your" << endl
		<< "choice. To demonstrate, if you input the number 10, the following function" << endl
		<< "call will occur:" << endl << endl;

	cout << "add(10);" << endl << endl;
	cout << "This recursive function will add up all the numbers between 1 and 10, and" << endl
		<< "display the results for you as follows:" << endl << endl;
	cout << "The sum of all the numbers between 1 and 10 is " << add(10) << "." << endl << endl;
	cout << "Now you try!";

	do {
		cout << endl << "Enter a positive integer: ";
		cin >> temp;
		while (temp < 1)
		{
			cout << "Error: you must enter 1 or greater." << endl;
			cout << "Enter a positive integer: ";
			cin >> temp;
		}
		number = static_cast<int>(temp);	//Prevent errors in case the user enters a floating-point number by mistake
		cout << "The sum of all the numbers between 1 and " << number << " is " << add(number) << "." << endl;
		cout << "Would you like to try another value? (y/n): ";
		cin >> again;
	} while (again == 'y' || again == 'Y');

	cout << endl << "Thank you for using this program!" << endl << endl;
	system("pause");
	return 0;
}

//###################################################################################################
//This recursive function adds all the integers between 1 and the parameter passed to the function.	#
//###################################################################################################
int add(int num)
{
	if (num <= 1)		//Base case
		return 1;
	else
	{
		return num + add(num - 1);
	}
}