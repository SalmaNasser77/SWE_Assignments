#include <iostream>
#include <vector>
#include <string>

// Abstract class: LibraryItem
class LibraryItem {
public:
    virtual void displayInfo() const = 0; // Pure virtual method to display info
    virtual bool isAvailable() const = 0; // Pure virtual method to check availability
    virtual void borrowItem() = 0;        // Pure virtual method to borrow item
    virtual void returnItem() = 0;        // Pure virtual method to return item
    virtual ~LibraryItem() {}              // Virtual destructor
};

// Derived class: Book
class Book : public LibraryItem {
private:
    std::string title;
    std::string author;
    bool available; // Availability status

public:
    Book(const std::string& p_title, const std::string& p_author)
        : title(p_title), author(p_author), available(true) {}

    void displayInfo() const override {
        std::cout << "Book Title: " << title << ", Author: " << author 
                  << ", Available: " << (available ? "Yes" : "No") << std::endl;
    }

    bool isAvailable() const override {
        return available;
    }

    void borrowItem() override {
        if (available) {
            available = false;
            std::cout << "You have borrowed the book: " << title << std::endl;
        } else {
            std::cout << "Sorry, the book is currently unavailable." << std::endl;
        }
    }

    void returnItem() override {
        available = true;
        std::cout << "You have returned the book: " << title << std::endl;
    }
};

// Derived class: Magazine
class Magazine : public LibraryItem {
private:
    std::string title;
    int issueNumber;
    bool available; // Availability status

public:
    Magazine(const std::string& p_title, int p_issueNumber)
        : title(p_title), issueNumber(p_issueNumber), available(true) {}

    void displayInfo() const override {
        std::cout << "Magazine Title: " << title << ", Issue Number: " << issueNumber 
                  << ", Available: " << (available ? "Yes" : "No") << std::endl;
    }

    bool isAvailable() const override {
        return available;
    }

    void borrowItem() override {
        if (available) {
            available = false;
            std::cout << "You have borrowed the magazine: " << title << std::endl;
        } else {
            std::cout << "Sorry, the magazine is currently unavailable." << std::endl;
        }
    }

    void returnItem() override {
        available = true;
        std::cout << "You have returned the magazine: " << title << std::endl;
    }
};

int main() {
    // Create a vector of LibraryItem pointers
    std::vector<LibraryItem*> items;

    // Create some library items and add them to the vector
    items.push_back(new Book("The Great Gatsby", "F. Scott Fitzgerald"));
    items.push_back(new Book("1984", "George Orwell"));
    items.push_back(new Magazine("National Geographic", 2024));
    items.push_back(new Magazine("Time", 2023));

    // Display information about each library item
    std::cout << "Library Items:\n";
    for (const auto& item : items) {
        item->displayInfo();
    }

    // Example of borrowing and returning items
    std::cout << "\nBorrowing items:\n";
    items[0]->borrowItem(); // Borrow first book
    items[2]->borrowItem(); // Borrow first magazine
    items[0]->borrowItem(); // Try to borrow the same book again

    std::cout << "\nReturning items:\n";
    items[0]->returnItem(); // Return first book
    items[2]->returnItem(); // Return first magazine

    // Clean up memory
    for (const auto& item : items) {
        delete item;
    }

    return 0;
}
