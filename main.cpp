#include <iostream>

// Program Menu Function
void printMenu() {
	std::cout << "=================\n";
	std::cout << "1: Get Help\n";
	std::cout << "2: Exchange Stats\n";
	std::cout << "3: Make Offers\n";
	std::cout << "4: Place Bids\n";
	std::cout << "5: Your Wallet\n";
	std::cout << "6: Continue\n";
	std::cout << "=================\n";
}

// Function to get the user input
int getUserOptions() {
	int userOption;
	std::cout << "Select an option from the menu: ";
	std::cin >> userOption;
	std::cout << "\nYour selected option is: " << userOption << "\n";
	return 0;
}

// Function to returning an output based on the User input
void processUserOptions(int userOption) {
	if (userOption <= 0 || userOption >= 7 || std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore();
		std::cout << "\x1b[1mError! Error!\x1b[0m\n"
				<< "\x1b[1mChoose an option from 1-6 only!\x1b[0m\n";
	}
	switch (userOption) {
		case 1:
			std::cout << "Help Menu Selected\n";
			break;
		case 2:
			std::cout << "Today's Exchnge Stats\n";
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

int main () {
	while (true) {
		printMenu();
		int userOption = getUserOptions();
		processUserOptions(userOption);
	}
	return 0;
}
