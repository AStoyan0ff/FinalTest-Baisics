#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int percentFat, percentProtein, percentCarbs, totalCalories, percentWater;
    cin >> percentFat >> percentProtein >> percentCarbs >> totalCalories >> percentWater;

    double caloriesFromFat = (percentFat / 100.0) * totalCalories;
    double caloriesFromProtein = (percentProtein / 100.0) * totalCalories;
    double caloriesFromCarbs = (percentCarbs / 100.0) * totalCalories;

    double gramsFat = caloriesFromFat / 9.0;
    double gramsProtein = caloriesFromProtein / 4.0;
    double gramsCarbs = caloriesFromCarbs / 4.0;

    double totalFoodWeight = gramsFat + gramsProtein + gramsCarbs;

    double caloriesPerGramFood = totalCalories / totalFoodWeight;

    double finalFoodWeight = caloriesPerGramFood * (1 - percentWater / 100.00);


    cout << fixed << setprecision(4) << finalFoodWeight << endl;

    return 0;
}
