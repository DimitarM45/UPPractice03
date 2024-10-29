#include <iostream>

int main()
{
	unsigned int peopleCount;
	std::cin >> peopleCount;

	double ticketPrice;
	std::cin >> ticketPrice;

	double discount = 1;

	if (peopleCount >= 5 && peopleCount <= 10)
	{
		discount = 0.05;
	}
	else if (peopleCount >= 11 && peopleCount <= 20)
	{
		discount = 0.1;
	}
	else if (peopleCount >= 21)
	{
		discount = 0.1;
	}

	double totalTicketPrice = peopleCount * ticketPrice;

	double totalEarnings = totalTicketPrice - totalTicketPrice * discount;

	std::cout << totalEarnings;
}