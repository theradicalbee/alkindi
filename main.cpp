#include <iostream>
#include <string>
#include <vector>

enum class OrderBookType {bid, ask};
OrderBookType orderType = OrderBookType::ask;


// define a class that can store the data for an entry in the order book
class OrderBookEntry { 
	private:
		std::string timeStamps;
		std::string products;
		OrderBookType orderTypes;
		double bids;
		double asks;	

// Constructor implementation
	public:
		OrderBookEntry(	std::string timeStamps, std::string products, 
			OrderBookType orderTypes, double bids, double asks)
		: timeStamps(timeStamps), products(products), orderTypes(orderTypes),
				bids(bids), asks(asks) {}

    std::string getTimestamp() const { return timeStamps; }
    std::string getProduct() const { return products; }
    OrderBookType getOrderType() const { return orderTypes; }
    double getBidPrice() const { return bids; }
    double getAskAmount() const { return asks; }

};

// Function to compute average price
double computeAveragePrice(const std::vector<OrderBookEntry>& entries) {
    double total = 0.0;
    for (const auto& entry : entries) {
        total += entry.getBidPrice();
    }
    return total / entries.size();
}

// Function to compute the lowest bid price
double computeLowPrice(const std::vector<OrderBookEntry>& entries) {
    double lowest = entries[0].getBidPrice();
    for (const auto& entry : entries) {
        if (entry.getBidPrice() < lowest) {
            lowest = entry.getBidPrice();
        }
    }
    return lowest;
}

// Function to compute the highest bid price
double computeHighPrice(const std::vector<OrderBookEntry>& entries) {
    double highest = entries[0].getBidPrice();
    for (const auto& entry : entries) {
        if (entry.getBidPrice() > highest) {
            highest = entry.getBidPrice();
        }
    }
    return highest;
}

// Function to compute the bid price spread
double computePriceSpread(const std::vector<OrderBookEntry>& entries) {
    double lowest = computeLowPrice(entries);
    double highest = computeHighPrice(entries);
    return highest - lowest;
}

int main () {
	// Constraint the data in the program
	// try to write very clear code that does not use too much implicit information
	
	std::vector<OrderBookEntry> entries;

	entries.push_back(	OrderBookEntry{"2020/03/17 17:01:24.884492",
											"ETH/BTC",
											OrderBookType::ask,
											0.5,
											0.125});
	
	entries.push_back(	OrderBookEntry{"2021/04/18 18:02:25.884493",
											"BTC/ETH",
											OrderBookType::bid,
											0.56,
											0.1257});

	entries.push_back(	OrderBookEntry{"2020/02/18 16:03:23.884491",
											"ETH/BTC",
											OrderBookType::ask,
											0.6,
											0.236});
	
	entries.push_back(	OrderBookEntry{"2021/03/16 15:03:27.884494",
											"BTC/ETH",
											OrderBookType::bid,
											0.46,
											0.2368});

	entries.push_back(	OrderBookEntry{"2020/04/15 11:05:27.884496",
											"ETH/BTC",
											OrderBookType::ask,
											0.72,
											0.314});
	
	entries.push_back(	OrderBookEntry{"2021/05/12 18:08:28.995508",
											"BTC/ETH",
											OrderBookType::bid,
											0.86,
											0.1257});

	// Iterating over entries
	std::cout << "Today's buy and sell \n";
	std::cout << "Order Time, Ordered Product, Order Type, Bid Amount, Ask Amount \n";
	for (const auto& entry : entries) {
			std::cout << entry.getTimestamp() << ", " << entry.getProduct() << ", ";
			switch (orderType) {
			case OrderBookType::ask : std::cout << "ask, "; break;
			case OrderBookType::bid : std::cout << "bid, "; break;
			}
			std::cout << entry.getBidPrice() << ", " << entry.getAskAmount() << "\n";

	}
	// Compute and print market stats
	std::cout << "-------Market Stats--------\n";
	std::cout << "Average Bid Price: " << computeAveragePrice(entries) << "\n";
	std::cout << "Lowest Bid Price: " << computeLowPrice(entries) << "\n";
	std::cout << "Highest BidPrice: " << computeHighPrice(entries) << "\n";
	std::cout << "Price Bid Spread: " << computePriceSpread(entries) << "\n";

	return 0;
}
