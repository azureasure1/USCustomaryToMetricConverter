/*
Programmer: Cody Griffin
Date: 8/7/2016
Program: US Customary to Metric Converter
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	//Variables
	int unitChoice;
	
	//Introduces the user to the program and asks what the user wants to convert to metric.
	cout << "Welcome to the U.S. Customary to Metric Converter. ";
	cout << "Please choose one of the following measurements that you would like to convert to metric." << endl;

	cout << "1. Mass" << endl;
	cout << "2. Length" << endl;
	cout << "3. Speed" << endl;

	cin >> unitChoice;
	cout << endl;
	
	//If the user selects mass
	if (unitChoice == 1) 
	{

		//Asks user for U.S. pounds
		double pounds;
		cout << "U.S. Pounds: ";
		cin >> pounds;
		cout << endl;

		//Converts pounds to kilograms
		double kilograms = pounds * 0.453592;
		cout << "Metric: " << kilograms << endl;
	}//End mass
	
	//If the user selects length
	else if (unitChoice == 2) 
	{
	
		//Asks user what unit of length he or she would like to convert to metric
		int lengthChoice;
		cout << "What unit of measurement would you like to convert to the metric system?" << endl;
		cout << "1. Inches" << endl;
		cout << "2. Feet" << endl;
		cout << "3. Miles" << endl;

		cin >> lengthChoice;
		cout << endl;

		//If the user wants to convert inches, this converts them to centimeters
		if (lengthChoice == 1)
		{
			//Asks for the user to input the amount of inches
			double inches;
			cout << "Inches: ";
			cin >> inches;
			cout << endl;

			//Converts inches to centimeters
			double centimeters = inches * 2.54;
			cout << "Centimeters: " << centimeters << endl;
		}//End Inches to centimeters
		
		//If the user wants to convert feet, this converts them to meters
		else if (lengthChoice == 2)
		{
			//Asks for the user to input the amount of feet
			double feet;
			cout << "Feet: ";
			cin >> feet;
			cout << endl;

			//Converts feet to meters
			double meters = feet * 0.3048;
			cout << "Meters: " << meters << endl;
		}//End Feet to Meters

		//If the user wants to convert miles, this converts them to kilometers
		else if (lengthChoice == 3)
		{
			//Asks for the user to input the amount of miles
			double miles;
			cout << "Miles: ";
			cin >> miles;
			cout << endl;

			//Converts miles to kilometers
			double kilometers = miles * 1.60934;
			cout << "Kilometers: " << kilometers << endl;
		}//End Miles to kilometers

		//If the user selects an option that is not available
		else 
		{
			cout << "This is not a valid choice." << endl;
		}
	}//End length

	//If the user selects speed
	else if (unitChoice == 3) 
	{
		//Asks user for miles per hours and converts to kilometers per hour
		double mph;
		cout << "Miles per hour: ";
		cin >> mph;
		cout << endl;

		//Converts mph to kph
		double kph = mph * 1.60934;
		cout << "Kilometers per hour: " << kph << endl;

		cout << "Note that the conversion between miles per hour and km per hour is the same as converting miles to km." << endl;
	}//End speed

	//If user selects an unavailable choice
	else
	{
		cout << "This is not a valid choice." << endl;
	}

	cin.get();
	cin.ignore();
	return 0;
}//End main
