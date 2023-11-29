#include <iostream>
#include <string>

void greet()
{
	std::cout << "Welcome to the Feature branch Adventurers!" << std::endl;
}

void goodbye()
{
	std::cout << "Your adventure has come to an end!" << std::endl;
}

int main()
{
	// Print some alternative text.
	greet();
	// Print ending message.
	goodbye();

	//std::cin.get();
}