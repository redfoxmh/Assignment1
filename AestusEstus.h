/* 
 * File:   AestusEstus.h
 * Author: Luiz Hosfeld (Lh15s@my.fsu.edu(
 * 
 * Created on January 31, 2019, 10:16 P.M.
 */
 
#include <string>
#include "Weapon.h"

#ifndef AESTUSESTUS_H
#define AESTUSESTUS_H

/**
 * Defines the behavior of a Aestus Estus
 (hitpoint = 700, keeps armor if under 25 otherwise ignores all armor if armor is a multiple of 3, otherwise add half of armor to a stack 
 and check the other half if its a multiple of 3
 if so ignore that half, otherwise cut that half again and add to stack and try again until less than 25.
 */
class AestusEstus : public Weapon {
public:

    AestusEstus() : Weapon("Aestus Estus", 700.0) { //Calls Weapon(name, hitpoints) constructor with values Aestus Estus and 50
    }

    virtual ~AestusEstus() {};

    virtual double hit(double armor);

};

#endif /* AESTUSESTUS_H */
