#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main() {



	int people;
	cin >> people;

	string season;
	cin >> season;

	double pricePerPerson = 0.0;

	if (people <= 5) {
		if (season == "spring") {
			pricePerPerson = 50.00;
		}
		else if (season == "summer") {
			pricePerPerson = 48.50;
		}
		else if (season == "autumn") {
			pricePerPerson = 60.00;
		}
		else if (season == "winter") {
			pricePerPerson = 86.00;
		}
		
		
	}
	else {
		if (season == "spring") {
			pricePerPerson = 48.00;
		}
		else if (season == "summer") {
			pricePerPerson = 45.00;
		}
		else if (season == "autumn") {
			pricePerPerson = 49.50;
		}
		else if (season == "winter") {
			pricePerPerson = 85.00;
		}
	}

	double totalPrice = static_cast<double>((people) * pricePerPerson);

	if (season == "summer") {
		totalPrice *= 0.85;
	}
	else if (season == "winter") {
		totalPrice *= 1.08;
	}


	cout << fixed << setprecision(2) << totalPrice << " leva." << endl;
		 
	return 0;
}
