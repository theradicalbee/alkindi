#include <iostream>
#include <string>
#include <vector>

enum class OrderBookType {bid, ask};

int main  () {
  // signed int x{-5};
  // std::cout << x << std::endl;

	OrderBookType orderType = OrderBookType::ask;
	//OrderBookType orderType = OrderBookType::bid;

	std::vector<std::string> timeStamps;
	std::vector<std::string> products;
	std::vector<OrderBookType> orderTypes;
	std::vector<double> bids;
	std::vector<double> asks;

	timeStamps.push_back("2020/03/17 17:01:24.884492");
	products.push_back("ETH/BTC");
	orderTypes.push_back(OrderBookType::ask);
	bids.push_back(0.5);
	asks.push_back(0.125);
	
	timeStamps.push_back("2021/04/18 18:02:25.884493");
	products.push_back("BTC/ETH");
	orderTypes.push_back(OrderBookType::bid);
	bids.push_back(0.1256);
	asks.push_back(0.57);
	
	std::cout << "Order Time, Ordered Product, Order Type, Bid Amount, Ask Amount \n";
	
	std::cout << timeStamps[0] << ", " << products[0] << ", ";
	switch (orderType) {
	case OrderBookType::ask : std::cout << "ask, "; break;
	case OrderBookType::bid : std::cout << "bid, "; break;
	}
	std::cout << bids[0] << ", " << asks[0] << "\n";

	std::cout << timeStamps[1] << ", " << products[1] << ", ";
	switch (orderType) {
	case OrderBookType::ask : std::cout << "ask, "; break;
	case OrderBookType::bid : std::cout << "bid, "; break;
	}
	std::cout << bids[1] << ", " << asks[1] << "\n";

	// std::cout << "Order Time, Ordered Product, Order Type, Bid Amount, Ask Amount \n";	
	
	// std::cout << entries[0].timeStamps << ", " << entries[0].products << ", ";
	// switch (orderType) {
	// case OrderBookType::ask : std::cout << "ask, "; break;
	// case OrderBookType::bid : std::cout << "bid, "; break;
	// }
	// std::cout << entries[0].bids << ", " << entries[0].asks << "\n";

	// std::cout << entries[1].timeStamps << ", " << entries[1].products << ", ";
	// switch (orderType) {
	// case OrderBookType::ask : std::cout << "ask, "; break;
	// case OrderBookType::bid : std::cout << "bid, "; break;
	// }
	// std::cout << entries[1].bids << ", " << entries[1].asks << "\n";

  return 0;
}
