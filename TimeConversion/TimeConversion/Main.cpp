#include <iostream>
using namespace std;

//PROGRAM: TimeConversion
//AUTHOR: Tyler Timmins
//COURSE: ITSE 1307 2002
//DESCRIPTION: Prompts the user to enter any number of
//				minutes and converts it to hours with minutes

int main()
{
	//variables
	int iMinutes;
	int iHours;
	int iRemainder;

	//Prompt
	cout << "Enter the Minutes: ";
	cin >> iMinutes;

	//Calculate
	iHours = iMinutes / 60;
	iRemainder = iMinutes % 60;

	//Display output
	cout << iMinutes << " minutes is equal to " << iHours << " hours and " << iRemainder << " minutes" << endl;

	return 0;
}