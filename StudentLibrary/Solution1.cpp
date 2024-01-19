#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::result = 0.00f;
float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	result = _value;
	if (_from == TemperatureUnits::KELVIN)
	{
		if (_to == TemperatureUnits::CELSIUS)
		{
			result = _value - 273.15;
		}
		else if (_to == TemperatureUnits::FAHRENHEIT)
		{
			result = 9.00 / 5.00 * (_value - 273.15) + 32.00;
		}
	}
	else if (_from == TemperatureUnits::FAHRENHEIT)
	{
		if (_to == TemperatureUnits::CELSIUS)
		{
			result = 5.00 / 9.00 * (_value - 32.00);
		}
		else if (_to == TemperatureUnits::KELVIN)
		{
			result = 5.00 / 9.00 * (_value - 32.00) + 273.15;
		}
	}
	else if (_from == TemperatureUnits::CELSIUS)
	{
		if (_to == TemperatureUnits::KELVIN)
		{
			result = _value + 273.15;
		}
		else if (_to == TemperatureUnits::FAHRENHEIT)
		{
			result = 9.00 / 5.00 * _value + 32.00;
		}
	}

	return result;
}

#endif
