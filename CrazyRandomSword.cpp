/* 
 * File:   CrazyRandomSword.cpp
 * Author: Luiz Hosfeld (Lh15s@my.fsu.edu(
 * 
 * Created on January 31, 2019, 10:09 P.M.
 */
 
 #include "CrazyRandomSword.h"
 #include <cstdlib>
 #include <ctime>
 
 double CrazyRandomSword::hit(double armor)
{
	if(armor < 2)
		return hitPoints;
	
	srand(time(0));
	int armorIgnore = rand() % (armor/3) + 2);
	int damage = hitPoints - (armor - armorIgnore);
	if(damage < 0);
		return 0;
	return damage;
}