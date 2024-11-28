#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;  

    double totaSales = 0.0;  
    double totalRating = 0.0; 

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;  

       
        int rating = number % 10;

        
        int potentialSales = number / 10;

        
        double actualSales = 0.0;
        if (rating == 2) {
            actualSales = 0.0;
        }
        else if (rating == 3) {
            actualSales = potentialSales * 0.5;
        }
        else if (rating == 4) {
            actualSales = potentialSales * 0.7;
        }
        else if (rating == 5) {
            actualSales = potentialSales * 0.85;
        }
        else if (rating == 6) {
            actualSales = potentialSales * 1.0;
        }

       
        totaSales += actualSales;
        totalRating += rating;
    }

   
    double averageRating = totalRating / n;

    
    cout << fixed << setprecision(2) << totaSales << endl;
    cout << fixed << setprecision(2) << averageRating << endl;

    return 0;
}
