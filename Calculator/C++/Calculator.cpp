#include <iostream>

int main()
{
	char op, choice;
    double numb1, numb2, result;

	std::cout <<"*********** Calculator ***********\n";
	do {

		std::cout << "Enter either (+ - * /): ";
		std::cin >> op;

		std::cout << "Enter Numb 1: ";
		std::cin >> numb1;

		std::cout << "Enter Numb 2: ";
		std::cin >> numb2;

		switch (op) {
		case'+':
			result = numb1 + numb2;
			std::cout << "Result: " << result;
			break;
		case'-':
			result = numb1 - numb2;
			std::cout << "Result: " << result;
			break;
		case'*':
			result = numb1 * numb2;
			std::cout << "Result: " << result;
			break;
		case'/':
			result = numb1 / numb2;
			std::cout << "Result: " << result;
			break;
		default:
			std::cout << "Invalid operator!";
			break;
		}
		std::cout << "\n----------------------------------\n";
		std::cout << "Do you want to calculate again? (y/n): ";
		std::cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	
	std::cout << "\n**********************************\n";
	  
    return 0;
}
