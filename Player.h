#ifndef PLAYER_H
#define PLAYER_H

#include <string>

// Player is the parent class of all player characters

// Abstract class
class Player
{
public:
	// CONSTRUCTOR & DESTRUCTOR
	Player();
	virtual ~Player() {}

	// ATTRIBUTES
protected:
	std::string classType; //The class name but class cannot be used as a variable name
public:
	std::string name;
protected:
	int health;
	int abilityPoints;
	int abilityPointsGain;
	int speed;
	std::string weakness;
	// attack names
	std::string attackBasic;
	std::string attackClass;
	std::string attackCharacter1;
	std::string attackCharacter2;

	// BEHAVIOURS
public:
	// GET FUNCTIONS
	std::string get_classType();
	std::string get_name();
	int get_health();
	int get_abilityPoints();
	int get_abilityPointsGain();
	int get_speed();
	std::string get_weakness();
	// attack names
	std::string get_attackBasic();
	std::string get_attackClass();
	std::string get_attackCharacter1();
	std::string get_attackCharacter2();
	
	// CHANGE FUNCTIONS
	void change_health(int);
	void change_abilityPoints(int);
	void change_abilityPointsGain(int);
	void change_speed(int);
	void change_weakness(std::string);

	// GENERAL
	int random(int, int);

	// ATTACK FUNCTIONS
	std::string* attack_basic();
	virtual std::string* attack_class() = 0;
	virtual std::string* attack_character1() = 0;
	virtual std::string* attack_character2() = 0;
};

#endif