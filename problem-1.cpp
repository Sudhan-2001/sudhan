#include <iostream>
#include <math.h>
using namespace std;
class Calculator {
    double A, B;
public:
    void get() {
        cout << "Enter First Number: ";
        cin >> A;
        cout << "Enter Second Number: ";
        cin >> B;
    }
    double add() {
        return A + B;
    }
    double sub() {
        return A - B;
    }
    double mul() {
        return A * B;
    }
    double div() {
        if (B == 0) {
            cout << "Divison By Zero" << endl;
            return INFINITY;
        }
        else {
            return A / B;
        }
    }
};
int main() {
    int choice;
    Calculator cal; // simple calculator object
    cout << "Enter 1 for add"
        << "\nEnter 2 for Subtract"
        << "\nEnter 3 for Multiply"
        << "\nEnter 4 for Divide"
        << "\nEnter 0 To Exit"
        << "\n";
    do {
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cal.get();
            cout << "Result: " << cal.add() << endl;
            break;
        case 2:
            cal.get();
            cout << "Result: " << cal.sub() << endl;
            break;
        case 3:
            cal.get();
            cout << "Result: " << cal.mul() << endl;
            break;
        case 4:
            cal.get();
            cout << "Result: " << cal.div() << endl;
            break;
        }
    } while (choice >= 1 && choice <= 4);
    return 0;
}