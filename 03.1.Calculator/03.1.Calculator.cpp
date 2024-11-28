#include <iostream>
using namespace std;

int main() {
    int numberOfPeople;
    cin >> numberOfPeople;

    string season;
    cin >> season;

    double pricePerPeople = 0.0;
    double totalPrice = 0.0;

    if (season == "spring") {
        if (numberOfPeople <= 5) {
            pricePerPeople = 50.00;
            totalPrice = numberOfPeople * pricePerPeople;
        }
        else if (numberOfPeople > 5) {
            pricePerPeople = 48.00;
            totalPrice = numberOfPeople * pricePerPeople;
        }
    }
    else if (season == "summer") {
        if (numberOfPeople <= 5) {
            pricePerPeople = 48.50;
            totalPrice = numberOfPeople * pricePerPeople;
            totalPrice = totalPrice * 0.85;
        }
        else if (numberOfPeople > 5) {
            pricePerPeople = 45.00;
            totalPrice = numberOfPeople * pricePerPeople;
            totalPrice = totalPrice * 0.85;
        }
    }
    else if (season == "autumn") {
        if (numberOfPeople <= 5) {
            pricePerPeople = 60.00;
            totalPrice = numberOfPeople * pricePerPeople;
        }
        else if (numberOfPeople > 5) {
            pricePerPeople = 49.50;
            totalPrice = numberOfPeople * pricePerPeople;
        }
    }
    else if (season == "winter") {
        if (numberOfPeople <= 5) {
            pricePerPeople = 86.00;
            totalPrice = numberOfPeople * pricePerPeople;
            totalPrice = totalPrice * 1.08;
        }
        else if (numberOfPeople > 5) {
            pricePerPeople = 85.00;
            totalPrice = numberOfPeople * pricePerPeople;
            totalPrice = totalPrice * 1.08;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalPrice << " leva." << endl;

    return 0;
}