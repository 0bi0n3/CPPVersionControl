#include <string>
#include <cmath>


// Path: CharacterMain.cpp

void CalculateHealth(int health, int healthRegen)
{
	health += healthRegen;
}

void CalculateHealth(int* health, int healthRegen)
{
	*health += healthRegen;
}