#include <iostream>
#include <string>

void greet()
{
	std::cout << "Welcome to the Feature branch Adventurers!" << std::endl;
}

void goodbye()
{
	std::cout << "Fare Thy Well!" << std::endl;
}

int main()
{
	// Print some alternative text.
	greet();

	// Print leaving message.
	goodbye();

	//std::cin.get();
}