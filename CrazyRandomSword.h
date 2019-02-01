/* 
 * File:   CrazyRandomSword.h
 * Author: Luiz Hosfeld (Lh15s@my.fsu.edu(
 * 
 * Created on January 31, 2019, 10:09 P.M.
 */
 
#include <string>
#include <cstdlib>
#include <ctime>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a Random Sword
 (hitpoint = random value from 7 to 100, ignores a random amount of armor from 2 to a third of the armor value
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Random Sword", 7) //Calls Weapon(name, hitpoints) constructor with values Crazy Random Sword and a random damage value from 7-100
	{
		srand(time(0));
		hitPoints = rand() % 94 + 7;
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */