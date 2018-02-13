#include "stdafx.h"
#include "character.h"

using namespace std;

character create_character()
{
	character ch = character();
	
	// Naming the character
	cout << "What is the name of your character?" << endl;
	
	cout << "> ";
	string char_name;
	getline(cin, char_name);

	// Building the character
	string status_name[4] = { "Health", "Agility", "Strength", "Intelligence" };
	string status_description[4] = { "Roll 2 dices.", "Roll one dice.", "Roll one dice.", "Roll one dice." };

	for (int i = 0; i++; i < 4)
	{
		string message = "" + status_name[i] + ".";
		cout << message << endl;
		//TODO...
	}
	
	return character();
};
