#include "Player.h"
#include <string>
#include "random.h"

// CONSTRUCTOR
Player::Player()
{
	classType = "";
	name = "";
	health = 0;
	abilityPoints = 10;
	abilityPointsGain = 0;
	speed = 0;
	weakness = "";
}


// RETURN FUNCTIONS
std::string Player::get_classType()
{
	return classType;
}
std::string Player::get_name()
{
	return name;
}
int Player::get_health()
{
	return health;
}
int Player::get_abilityPoints()
{
	return abilityPoints;
}
int Player::get_abilityPointsGain()
{
	return abilityPointsGain;
}
int Player::get_speed()
{
	return speed;
}
std::string Player::get_weakness()
{
	return weakness;
}
// attack names
std::string Player::get_attackBasic()
{
	return attackBasic;
}
std::string Player::get_attackClass()
{
	return attackClass;
}
std::string Player::get_attackCharacter1()
{
	return attackCharacter1;
}
std::string Player::get_attackCharacter2()
{
	return attackCharacter2;
}

// GENERAL
int Player::random(int, int)
{
	return 0;
}

// CHANGE FUNCTIONS
void Player::change_health(int healthAdjustment) //Changes player health stat, cannot be less than 0
{
	health = health + healthAdjustment; 
	if (health < 0)
	{
		health = 0;
	}
}
void Player::change_abilityPoints(int abilityPointsAdjustment) //Changes player ability points, cannot be less than 0
{
	abilityPoints = abilityPoints + abilityPointsAdjustment;
	if (abilityPoints < 0)
	{
		abilityPoints = 0;
	}
}
void Player::change_abilityPointsGain(int abilityPointsGainAdjustment)
{
	abilityPointsGain = abilityPointsGain + abilityPointsGainAdjustment;
}
void Player::change_speed(int speedAdjustment) //changes players speed, cannot be less than 0
{
	speed = speed + speedAdjustment;
	if (speed < 0)
	{
		speed = 0;
	}
}
void Player::change_weakness(std::string newWeakness) //changes players weakness
{
	weakness = newWeakness;
}

// ATTACK FUNCTIONS
std::string* Player::attack_basic() //Basic attack function uses no ap & applies no status effect
{	
	std::string* attack = new std::string[3];
	
	// AP COST
	*(attack + 0) = std::to_string(0);

	// TOTAL DAMAGE
	*(attack + 1) = std::to_string(generate_randomNumber(1, 10)); // calculates damage

	// STATUS EFFECT
	*(attack + 2) = "none"; // sets status effect to none

	return attack;
}