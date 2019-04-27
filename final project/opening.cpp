#include <iostream>
#include <string>
#include "cops.h"


using namespace std;

//meant to setup the story for the user
void openingStory(string CharacterName)
{
	cops Tim;

	cout << "You are standing in apartment number 123, Which just so happens to be the scene\n";
	cout << "of a terrable murder. your the ace detective " << CharacterName << " and it is your job to \n";
	//hoping to add one the ability to find a cause of death and suspect
	cout << "find the murder weapon.\n\n";

	Tim.approach();
	Tim.Talk("Hello detective, we found the victum and three possable murder weapons.");

	system("pause");
}