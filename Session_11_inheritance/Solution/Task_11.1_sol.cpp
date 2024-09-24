#include <iostream>
#include <vector>
#include <string>

// Base class: PaymentMethod
// Represents a generic payment method with an amount to be paid.
class PaymentMethod {
public:
    // Constructor to initialize the payment amount.
    PaymentMethod(double p_amount) : amount(p_amount) {}

    // Setter for the amount.
    void set_amount(double p_amount)
    {
        this->amount = p_amount;
    }

    // Getter for the amount.
    double get_amount()
    {
        return this->amount;
    }

protected:
    // Protected member to store the amount, accessible by derived classes.
    double amount;
};

// Derived class: CreditCard
// Represents a credit card payment method.
class CreditCard : public PaymentMethod {
public:
    // Constructor to initialize the payment amount and card number.
    CreditCard(double p_amount, std::string p_cardNumber)
        : PaymentMethod(p_amount), cardNumber(p_cardNumber) {}

    // Function to simulate processing a credit card payment.
    void processPayment() {
        std::cout << "Processing credit card payment of $" << amount 
                  << " with card number: " << cardNumber << std::endl;
    }

private:
    // Private member to store the card number, accessible only within this class.
    std::string cardNumber;
};

// Derived class: PayPal
// Represents a PayPal payment method.
class PayPal : public PaymentMethod {
public:
    // Constructor to initialize the payment amount and PayPal email.
    PayPal(double p_amount, std::string p_email)
        : PaymentMethod(p_amount), email(p_email) {}

    // Function to simulate processing a PayPal payment.
    void processPayment() {
        std::cout << "Processing PayPal payment of $" << amount 
                  << " from account: " << email << std::endl;
    }

private:
    // Private member to store the PayPal email, accessible only within this class.
    std::string email;
};

int main() {
    // Create a CreditCard object and simulate a credit card payment.
    CreditCard Card(5000, "3456 6782 8972 9909");
    Card.processPayment();

    // Create a PayPal object and simulate a PayPal payment.
    PayPal paypal(10000, "Example@gmail.com");
    paypal.processPayment();

    return 0;
}
