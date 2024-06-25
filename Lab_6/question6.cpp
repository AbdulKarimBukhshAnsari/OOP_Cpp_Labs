#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
public:
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}
    void simplify() {
        int gcdValue = gcd(numerator, denominator);
        numerator = numerator/ gcdValue;
        denominator = denominator/ gcdValue;
    }
    void print() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    int nume , deno;
    cout<<"Enter the numerator: ";
    cin>>nume;
    cout<<"Enter the denominator: ";
    cin>>deno;
    Fraction fraction(nume, deno);
    cout << "Original: ";
    fraction.print();
    fraction.simplify();
    cout << "Simplified: ";
    fraction.print();    
    return 0;
}
