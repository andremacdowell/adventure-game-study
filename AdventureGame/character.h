#pragma once

#ifndef CHARACTER_H_
#define CHARACTER_H_

// TODO: Define character with text color when they need to speak

// Base statuses
const int BASE_HEALTH = 50;
const int BASE_AGILITY = 10;
const int BASE_STRENGTH = 10;
const int BASE_INTELLIGENCE = 10;

// Classes
class character {
	// Statuses
	int health = BASE_HEALTH;
	int agility = BASE_AGILITY;
	int strength = BASE_STRENGTH;
	int intelligence = BASE_INTELLIGENCE;

	// Modifiers
	double htl_mod = 1;
	double agi_mod = 1;
	double str_mod = 1;
	double int_mod = 1;
public:
	double getHealthStatus() {	return health*htl_mod; };
	double getAgilityStatus() { return agility*agi_mod; }
	double getStrengthStatus() { return strength*str_mod; }
	double getIntelligenceStatus() { return intelligence*int_mod; }
};

// Methods
character create_character();

#endif