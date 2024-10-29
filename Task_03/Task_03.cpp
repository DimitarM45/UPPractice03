#include <iostream>

int main()
{
	bool isNew, hasAC;
	std::cin >> isNew;
	std::cin >> hasAC;

	int horsepower, mileage;
	std::cin >> horsepower;
	std::cin >> mileage;

	double price;
	std::cin >> price;

	bool willBuyIfOldAC = !isNew && hasAC && mileage < 115000 && horsepower >= 70 && price <= 6000;
	bool willBuyIfOldNoAC = !isNew && !hasAC && mileage < 180000 && horsepower >= 60 && price <= 2000;

	bool willBuyIfNew = isNew && (horsepower >= 70 && horsepower <= 90) && price <= 25000;

	bool willBuy = willBuyIfOldAC || willBuyIfOldNoAC || willBuyIfNew;

	std::cout << std::boolalpha << willBuy;
}