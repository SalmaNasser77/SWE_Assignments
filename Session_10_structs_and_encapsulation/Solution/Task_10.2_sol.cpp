#include <iostream>
#include <vector>
#include <string>

// Define a struct to represent an Item in the inventory
struct Item {
    std::string name;
    float price;
    int quantity;
};

int main() {
    // Create an inventory of items
    std::vector<Item> inventory = {
        {"Laptop", 1000.0, 10},
        {"Smartphone", 500.0, 20},
        {"Tablet", 300.0, 15}
    };

    // Lambda to update the price of an item (capturing by reference)
    auto updatePrice = [&inventory](const std::string& itemName, float newPrice) {
        for (auto& item : inventory) {
            if (item.name == itemName) {
                item.price = newPrice;
                std::cout << "Updated price of " << item.name << " to $" << item.price << std::endl;
            }
        }
    };

    // Lambda to check if an item is out of stock (capturing by value)
    auto isOutOfStock = [inventory](const std::string& itemName) -> bool {
        for (const auto& item : inventory) {
            if (item.name == itemName) {
                return item.quantity == 0;
            }
        }
        return false;
    };

    // Lambda to calculate the total value of the inventory (capturing by reference)
    auto calculateTotalValue = [&inventory]() -> float {
        float totalValue = 0.0;
        for (const auto& item : inventory) {
            totalValue += item.price * item.quantity;
        }
        return totalValue;
    };

    // Use the lambda functions
    // 1. Update the price of "Smartphone"
    updatePrice("Smartphone", 550.0);

    // 2. Check if "Laptop" is out of stock
    bool laptopOutOfStock = isOutOfStock("Laptop");
    std::cout << "Laptop out of stock: " << (laptopOutOfStock ? "Yes" : "No") << std::endl;

    // 3. Calculate the total value of the inventory
    float totalValue = calculateTotalValue();
    std::cout << "Total value of inventory: $" << totalValue << std::endl;

    return 0;
}
