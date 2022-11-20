#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

void menu();
void selectToCalculate(char choice);
double calculateVoltage(double voltage, double current, double resistance);
double calculateCurrent(double voltage, double current, double resistance);
double calculateResistance(double voltage, double current, double resistance);

int main()
{
    char choice;

    menu();

    cout << "\n\n\n\t\t\t\t\t\t\tEnter the corresponding letter of what you want to calculate: ";
    cin >> choice;
    system("CLS");
    cout << "\n\n\n\n\n";
    selectToCalculate(choice);

    return 0;
}

void menu(){
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\tW E L C O M E  T O  O H M S  L A W  C A L C U L A R O R\n\n\n";

    cout << "\t\t\t\t\t\t\t[A] - Voltage(V)\n\n";
    cout << "\t\t\t\t\t\t\t[B] - Current(I)\n\n";
    cout << "\t\t\t\t\t\t\t[C] - Resistance(R)\n";
}

void selectToCalculate(char choice){
    double voltage, current, resistance;

    switch(choice){
        case 'a':
        case 'A':
            cout << "\n\n\t\t\t\t\t\t\tC A L C U L A T E  T H E  V O L T A G E\n";
            cout << "\n\t\t\t\t\t\t\tEnter the value of current:";
            cin >> current;

            cout << "\n\t\t\t\t\t\t\tEnter the value of resistance:";
            cin >> resistance;

            cout << "\n\t\t\t\t\t\t\tThe total voltage is " << calculateVoltage(voltage, current, resistance) << " volt/s";
            break;

        case 'b':
        case 'B':
            cout << "\n\n\t\t\t\t\t\t\tC A L C U L A T E  T H E  C U R R E N T\n";
            cout << "\n\t\t\t\t\t\t\tEnter the value of voltage:";
            cin >> voltage;

            cout << "\n\t\t\t\t\t\t\tEnter the value of resistance:";
            cin >> resistance;

            cout << "\n\t\t\t\t\t\t\tThe total current is " << calculateCurrent(voltage, current, resistance) << " amp/s";
            break;

        case 'c':
        case 'C':
            cout << "\n\n\t\t\t\t\t\t\tC A L C U L A T E  T H E  R E S I S T A N C E\n";
            cout << "\n\t\t\t\t\t\t\tEnter the value of voltage:";
            cin >> voltage;

            cout << "\n\t\t\t\t\t\t\tEnter the value of current:";
            cin >> current;

            cout << "\n\t\t\t\t\t\t\tThe total resistance is " << calculateResistance(voltage, current, resistance) << " ohm/s";
            break;

        default:
            cout << "\t\t\t\t\t\t\tInvalid input\n";
            system("PAUSE");
            system("CLS");
            main();
    }
}

double calculateVoltage(double voltage, double current, double resistance){
    return voltage = current * resistance;
}

double calculateCurrent(double voltage, double current, double resistance){
    return current = voltage / resistance;
}

double calculateResistance(double voltage, double current, double resistance){
    return resistance = voltage / current;
}
