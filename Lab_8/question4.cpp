#include <iostream>
using namespace std;
class Payment {
public:
    virtual void processPayment() = 0; 
};
class CreditCardPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing credit card payment..." << endl;
    }
};
class PaypalPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing PayPal payment..." << endl;
    }
};
int main() {
    Payment *payment1 = new CreditCardPayment();
    payment1->processPayment();
    Payment *payment2 = new PaypalPayment();
    payment2->processPayment();
    delete payment1;
    delete payment2;
    return 0;
}
