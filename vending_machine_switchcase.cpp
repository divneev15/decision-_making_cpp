// 24070123043 Entc A2

#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "======= VENDING MACHINE =======\n";
    cout << "1. Tea         - ₹10\n";
    cout << "2. Coffee      - ₹15\n";
    cout << "3. Cold Drink  - ₹20\n";
    cout << "4. Water Bottle- ₹8\n";
    cout << "===============================\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected: Tea\n";
            cout << "Please pay ₹10\n";
            break;
        case 2:
            cout << "You selected: Coffee\n";
            cout << "Please pay ₹15\n";
            break;
        case 3:
            cout << "You selected: Cold Drink\n";
            cout << "Please pay ₹20\n";
            break;
        case 4:
            cout << "You selected: Water Bottle\n";
            cout << "Please pay ₹8\n";
            break;
        default:
            cout << "Invalid choice! Please select a valid item.\n";
    }

    return 0;
}

/* output

======= VENDING MACHINE =======
1. Tea         - ₹10
2. Coffee      - ₹15
3. Cold Drink  - ₹20
4. Water Bottle- ₹8
===============================
Enter your choice (1-4): 2
You selected: Coffee
Please pay ₹15

*/
