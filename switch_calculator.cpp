// divneev 24070123043 Entc A2
// Calculator using switch case

#include<iostream>
using namespace std;

int main()
{
    int choice;
    int num1, num2;
    int sum, product, difference;
    float division;

    cout << "\n===== SIMPLE CALCULATOR =====\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            sum = num1 + num2;
            cout << "\nResult: " << num1 << " + " << num2 << " = " << sum << endl;
            break;

        case 2:
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            difference = num1 - num2;
            cout << "\nResult: " << num1 << " - " << num2 << " = " << difference << endl;
            break;

        case 3:
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            product = num1 * num2;
            cout << "\nResult: " << num1 << " * " << num2 << " = " << product << endl;
            break;

        case 4:
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            if(num2 != 0)
            {
                division = static_cast<float>(num1) / num2;
                cout << "\nResult: " << num1 << " / " << num2 << " = " << division << endl;
            }
            else 
            {
                cout << "\n Error: Cannot divide by zero.\n";
            }
            break;

        default:
            cout << "\n Invalid choice! Please select from 1 to 4.\n";
            break;
    }

    cout << "\nThank you for using the calculator!" << endl;

    return 0;
}

/*
===== SIMPLE CALCULATOR =====
1. Addition
2. Subtraction
3. Multiplication
4. Division

Enter your choice (1-4): 4
Enter 1st number: 10
Enter 2nd number: 3

Result: 10 / 3 = 3.33333

Thank you for using the calculator!
*/
