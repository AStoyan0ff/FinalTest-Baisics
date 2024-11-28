#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int target;
    cin >> target;
       
    int earned_money = 0;
        
    string command;
    while (true) {
        cin >> command;

        if (command == "closed") {
            break;
        }
                
        if (command == "haircut") {
            string haircut_type;
            cin >> haircut_type;

            if (haircut_type == "mens") {
                earned_money += 15;
            }
            else if (haircut_type == "ladies") {
                earned_money += 20;
            }
            else if (haircut_type == "kids") {
                earned_money += 10;
            }
        }
        else if (command == "color") {
            string color_type;
            cin >> color_type;

            if (color_type == "touch up") {
                earned_money += 20;
            }
            else if (color_type == "full color") {
                earned_money += 30;
            }
        }

        // Проверка дали е достигната целта
        if (earned_money >= target) {
            cout << "You have reached your target for the day!" << endl;
            cout << "Earned money: " << earned_money << "lv." << endl;
            return 0;
        }
    }
        
    if (earned_money < target) {
        cout << "Target not reached! You need " << target - earned_money << "lv. more." << endl;
    }
    cout << "Earned money: " << earned_money << "lv." << endl;

    return 0;
}
