#include <iostream>

int main()
{
	short firstTimeCode, secondTimeCode;
	std::cin >> firstTimeCode >> secondTimeCode;

	short firstHours = firstTimeCode / 100;
	short firstMinutes = firstTimeCode % 100;

	short secondHours = secondTimeCode / 100;
	short secondMinutes = secondTimeCode % 100;

	bool areFirstHoursValid = firstHours >= 0 && firstHours <= 23;
	bool areFirstMinutesValid = firstMinutes >= 0 && firstMinutes <= 59;

	bool areSecondHoursValid = secondHours >= 0 && secondHours <= 23;
	bool areSecondMinutesValid = secondMinutes >= 0 && secondMinutes <= 59;

	bool isFirstTimeValid = areFirstHoursValid && areFirstMinutesValid;
	bool isSecondTimeValid = areSecondHoursValid && areSecondMinutesValid;

	if (isFirstTimeValid && isSecondTimeValid)
	{
		std::cout << abs(firstTimeCode - secondTimeCode);
		
		return 0;
	}

	std::cout << "Invalid";
}