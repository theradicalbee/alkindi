#include <iostream>
#include <string>
#include <vector>
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
	std::cout << "Your selected option is: " << userOption << "\n";
	return userOption;
}

// Help Function
void userHelp() {
	std::cout << "This is help menu.\n";
	std::cout << "Press 1 for account details.\n";
	std::cout << "Press 2 to change password.\n";
}
// Market Stats Function
void marketStats() {
	std::cout << "Today market is bullish.\n";
	std::cout << "Press 1 to see last week stats.\n";
	std::cout << "Press 2 to see last month stats.\n";
}
// Help Function
void enterAsk() {
	std::cout << "Make your offers to sale currency.\n";
}
// Help Function
void enterBid() {
	std::cout << "Bid to buy currency.\n";
}
// Help Function
void checkWallet() {
	std::cout << "Check your Balance\n";
}
// Help Function
void nextTimeframe() {
	std::cout << "Go to next timeframe.\n";
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
			userHelp();
			break;
		case 2:
			marketStats();
			break;
		case 3:
			enterAsk();
			break;
		case 4:
			enterBid();
			break;
		case 5:
			checkWallet();
			break;
		case 6:
			nextTimeframe();
			break;
	}
}

int main () {
	// Constraint the data in the program
	// try to write very clear code that does not use too much implicit information
	// double bid = 0.02187308;
	// double ask = 7.44564869;
	// std::string product = "ETH/BTC";
	// std::string orderTime = "2020/03/17 17:01:24.884492";
	// std::string orderType = "Bid";

	enum class orderBookType {bid, ask};
	orderBookType orderType = orderBookType::ask;

	std::vector<std::string> timeStamps;
	std::vector<std::string> products;
	std::vector<orderBookType> orderTypes;
	std::vector<double> bids;
	std::vector<double> asks;	

	timeStamps.push_back("2020/03/17 17:01:24.884492");
	products.push_back("ETH/BTC");
	orderTypes.push_back(orderBookType::ask);
	bids.push_back(0.5);
	asks.push_back(0.125);
	
	std::cout << "Order Time, Ordered Product, Order Type, Bid Amount, Ask Amount \n" 
		<< timeStamps[0] << ", " << products[0] << ", ";

	switch (orderType) {
	case orderBookType::ask : std::cout << "ask, "; break;
	case orderBookType::bid : std::cout << "bid, "; break;
	}

	std::cout << bids[0] << ", " << asks[0] << "\n";

	// while (true) {
	// 	printMenu();
	// 	int userOption = getUserOptions();
	// 	processUserOptions(userOption);
	// }
	return 0;
}
