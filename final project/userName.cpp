//lets the user put their own character into the story
#include <iostream>
#include <string>

using namespace std;

string GetCharacterName()
{
	cout << "Please enter your character name: ";

	string CharacterName;
	getline(std::cin, CharacterName);

	return CharacterName;

}
