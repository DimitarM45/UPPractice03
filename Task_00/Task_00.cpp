#include <iostream>

int main()
{
	int number;
	std::cin >> number;

	int temp = abs(number);

	bool hasOne = false;

	while (temp != 0)
	{
		if (temp % 10 == 1)
		{
			hasOne = true;

			break;
		}

		temp /= 10;
	}

	std::cout << (hasOne ? "YES" : "NO");
}
