#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double priceTshirt, minSumBall;
    cin >> priceTshirt >> minSumBall;

    
    double priceShorts = priceTshirt * 0.75;
    double priceSocks = priceShorts * 0.20;
    double priceBoots = (priceTshirt + priceShorts) * 2;

    
    double totalSum = priceTshirt + priceShorts + priceSocks + priceBoots;

    
    double totalDiscount = totalSum * 0.85;

    
    cout << fixed << setprecision(2);

    if (totalDiscount >= minSumBall) {
        cout << "Yes, he will earn the world-cup replica ball!" << endl;
        cout << "His sum is " << totalDiscount << " lv." << endl;
    }
    else {
        double moneyNeeded = minSumBall - totalDiscount;
        cout << "No, he will not earn the world-cup replica ball." << endl;
        cout << "He needs " << moneyNeeded << " lv. more." << endl;
    }

    return 0;
}
