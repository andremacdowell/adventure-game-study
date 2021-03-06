#include "stdafx.h"
#include "character.h"
#include "dice.h"

using namespace std;

// Terminal window colors
const WORD colors[] = {
	0x1A, 0x2B, 0x3C, 0x4D, 0x5E, 0x6F,
	0xA1, 0xB2, 0xC3, 0xD4, 0xE5, 0xF6
};

void window_startup() {
	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD   index = 0;

	// Remember how things were when we started
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hstdout, &csbi);
	SetConsoleTextAttribute(hstdout, colors[roll_twelve()]);
}

int main() {
	// Game entry point
	cout << "Game begin, press anything to continue." << endl;
	cin.get();
	
	// Builds character, changes background to random color
	window_startup(); 
	character me = create_character();
	
	//TODO:
	cin.get();

    return 0;
}

