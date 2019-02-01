/* 
 * File:   SimpleHammer.cpp
 * Author: Luiz Hosfeld (Lh15s@my.fsu.edu(
 * 
 * Created on January 31, 2019, 10:08 P.M.
 */
 
 #include "SimpleHammer.h"

double SimpleHammer::hit(double armor)
{
    if (armor < 30)
	{
        return hitPoints;
    }
    return 0;
}
