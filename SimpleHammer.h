/* 
 * File:   SimpleHammer.h
 * Author: Luiz Hosfeld (Lh15s@my.fsu.edu(
 * 
 * Created on January 31, 2019, 10:08 P.M.
 */
 
 #include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a Simple Hammer
 (hitpoint = 25, ignores all armor if armor is less than 30)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple Hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor with values Simple Hammer and 25.0
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */
