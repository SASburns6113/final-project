#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "functions.h"

//this function randamizes the story and player choose
int weapons;
int body;
void randStroyandChoose()
{
	random_device rd; // obtain a random number from hardware
	mt19937 eng(rd()); // seed the generator
	uniform_int_distribution<> distr(0, 2); // define the range

	int myRandNumber = distr(eng);
	cout << myRandNumber;

	string bodyArray[3] = { "The body is filled with bullets.\n","The body is filled with stab wounds.\n","The body's skull is smashed in.\n" };
	string selected = bodyArray[myRandNumber];

	cout << selected;
	//start my loop
	bool isWeaponValid = true;
	do
	{
		isWeaponValid = true;

		cout << "your weapons: Gun, Knife, Bat\n\n";
		string choose;
		cin >> choose;
		if (choose == "gun" && selected == bodyArray[0])
		{
			cout << "You found the murder weapon!\nYou Win!\n\n";
		}
		else if (choose == "bat" && selected == bodyArray[2])
		{
			cout << "You found the murder weapon!\nYou Win!\n\n";
		}
		else if (choose == "knife" && selected == bodyArray[1])
		{
			cout << "You found the murder weapon!\nYou Win!\n\n";
		}
		else if (choose != "gun" && choose != "bat" && choose != "knife")
		{
			cout << "invalid, pick gun, knife, or bat.\n\n";
			isWeaponValid = false;
		}
	} while (isWeaponValid == false);
	//end my loop
}