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
	
	int temp = (int)armor / 3;
	temp = temp - 1;
	temp = rand() % temp + 2;
	
	double damage = hitPoints - temp;
	
	if(damage < 0)
		return 0;
	
	return damage;
}