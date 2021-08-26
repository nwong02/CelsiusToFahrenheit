#include <stdio.h>
#include <stdlib.h>

/*
* Project		: CelsiusToFahrenheit
* Title			: Temp.cpp
* Author		: Nelson Wong
* Description	: Take a temperature in celsius and convert to fahrenheit, decrement celsius until the celsius temperature matches that of the fahrenheit value
*/

#define kCELSIUS 100			

int main()
{
	int celsiusValue = kCELSIUS;
	int fahrenheitValue = 0;

	for (int i = celsiusValue; ; i--)				// Decrementing the celsius scale indefinitely
	{
		fahrenheitValue = ((9 * i) / 5 + 32);		// Equation for converting celsius to fahrenheit
		printf("%d %d\n", fahrenheitValue, i);
		
		while (i == fahrenheitValue)				// Stop printing when the celsius scale is the same as fahrenheit
		{
			continue;
		}
	}

	return 0;
}