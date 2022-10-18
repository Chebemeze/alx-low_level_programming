#include "main.h"
/**
 *_islower - Returns "1" if letter entered is lowercase
 * and returns "0" when an uppercase isentered.
 */
int _islower( int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if(c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else {
		return (0);
	}
}
