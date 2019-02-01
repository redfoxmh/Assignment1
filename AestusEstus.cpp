/* 
 * File:   AestusEstus.cpp
 * Author: Luiz Hosfeld (Lh15s@my.fsu.edu(
 * 
 * Created on January 31, 2019, 10:08 P.M.
 */
 
#include "AestusEstus.h"
 
double AestusEstus::hit(double armor)
{
	if(armor < 25)
		return hitPoints - armor;
	double armorStack = 0;
	
	while(armor >= 25)
	{
		if(armor % 3 == 0)
			break;
		armorStack = armorStack + armor / 2;
		armor = armor / 2;
		if(armor < 25)
			armorStack = armorStack + armor;
	}
	
	double damage = hitPoints - armorStack;
	if(damage < 0)
		return 0;
	return damage;
	
}