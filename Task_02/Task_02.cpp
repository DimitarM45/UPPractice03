#include <iostream>

int main()
{
	unsigned int firstNum, secondNum;
	std::cin >> firstNum >> secondNum;

	for (int i = 2; i < firstNum; i++)
	{
		if (firstNum % i == 0 && secondNum % (i * i) == 0)
		{
			std::cout << "Yes";

			return 0;
		}
	}

	std::cout << "No";
}