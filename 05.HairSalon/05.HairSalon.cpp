#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int target;
    cin >> ws;
    cin >> ws >> target;

    
    int earnedMoney = 0;

    
    string command;
    while (earnedMoney < target) {
        getline(cin, command);

        if (command == "closed") {
            break;
        }

        
        if (command == "haircut") {
            string hairCutType;
            cin >> hairCutType;

            if (hairCutType == "mens") {
                earnedMoney += 15;
            }
            else if (hairCutType == "ladies") {
                earnedMoney += 20;
            }
            else if (hairCutType == "kids") {
                earnedMoney += 10;
            }
        }
        
        else if (command == "color") {
            string colorType;
            getline(cin, colorType);

            if (colorType == "touch up") {
                earnedMoney += 20;
            }
            else if (colorType == "full color") {
                earnedMoney += 30;
            }
        }

        
        if (earnedMoney >= target) {
            cout << "You have reached your target for the day!" << endl;
            cout << "Earned money: " << earnedMoney << "lv." << endl;
            return 0;
        }
    }
        
    if (earnedMoney < target) {
        cout << "Target not reached! You need " << target - earnedMoney << "lv. more." << endl;
    }
    
    cout << "Earned money: " << earnedMoney << "lv." << endl;

    return 0;
}
