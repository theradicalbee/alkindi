#include <iostream>


int main () {
	// Program Menu
	while (true) {
		std::cout << "=================\n";
		std::cout << "1: Get Help\n";
		std::cout << "2: Exchange Stats\n";
		std::cout << "3: Make Offers\n";
		std::cout << "4: Place Bids\n";
		std::cout << "5: Your Wallet\n";
		std::cout << "6: Continue\n";
		std::cout << "=================\n";
		// User Input
		int userOption;
		std::cout << "Select an option from the menu: ";
		std::cin >> userOption;
		std::cout << "Your selected option is: " << userOption << "\n";
		// Returning an output based on the User input
		if (userOption <= 0 || userOption >= 7) {
			std::cout << "\x1b[1mError! Error!\x1b[0m\n"
					<< "Choose an option from 1-6 only!\n";
		}
		switch (userOption) {
			case 1:
				std::cout << "Help Menu Selected\n";
				break;
			case 2:
				std::cout << "Today's Exchange Stats\n";
				break;
			case 3:
				std::cout << "Your Offers\n";
				break;
			case 4:
				std::cout << "Your Bids\n";
				break;
			case 5:
				std::cout << "Enter Your Wallet Code\n";
				break;
			case 6:
				std::cout << "Select A New Time frame\n";
				break;
		}
	}
	return 0;
}

