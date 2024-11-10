#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
double add(const vector<double>& numbers);
double subtract(double a, double b);
double multiply(const vector<double>& numbers);
double divide(double a, double b);
long long factorial(int n);
double squareRoot(double a);
double cubeRoot(double a);
double percentage(double total, double part);
double average(const vector<double>& numbers);
double square(double a);
double cube(double a);
void displayCalculator();
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double metersToKilometers(double meters);
double kilometersToMeters(double kilometers);
double gramsToKilograms(double grams);
double kilogramsToGrams(double kilograms);

int main() {
    int choice;
    double num1, num2;
    int factNum;

    do {
        displayCalculator();
        cout << "Choose an operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Factorial" << endl;
        cout << "6. Square Root" << endl;
        cout << "7. Cube Root" << endl;
        cout << "8. Percentage" << endl;
        cout << "9. Average" << endl;
        cout << "10. Square" << endl;
        cout << "11. Cube" << endl;
        cout << "12. Convert Celsius to Fahrenheit" << endl;
        cout << "13. Convert Fahrenheit to Celsius" << endl;
        cout << "14. Convert Meters to Kilometers" << endl;
        cout << "15. Convert Kilometers to Meters" << endl;
        cout << "16. Convert Grams to Kilograms" << endl;
        cout << "17. Convert Kilograms to Grams" << endl;
        cout << "18. Exit" << endl;
        cout << "Enter your choice (1-18): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int count;
                cout << "How many numbers do you want to add? ";
                cin >> count;
                vector<double> numbers(count);
                cout << "Enter " << count << " numbers: ";
                for (int i = 0; i < count; ++i) {
                    cin >> numbers[i];
                }
                cout << "Result: " << add(numbers) << endl;
                break;
            }
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3: {
                int count;
                cout << "How many numbers do you want to multiply? ";
                cin >> count;
                vector<double> numbers(count);
                cout << "Enter " << count << " numbers: ";
                for (int i = 0; i < count; ++i) {
                    cin >> numbers[i];
                }
                cout << "Result: " << multiply(numbers) << endl;
                break;
            }
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    cout << "Result: " << divide(num1, num2) << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            case 5:
                cout << "Enter a non-negative integer: ";
                cin >> factNum;
                if (factNum >= 0) {
                    cout << "Result: " << factorial(factNum) << endl;
                } else {
                    cout << "Error: Factorial is not defined for negative numbers!" << endl;
                }
                break;
            case 6:
                cout << "Enter a non-negative number: ";
                cin >> num1;
                if (num1 >= 0) {
                    cout << "Result: " << squareRoot(num1) << endl;
                } else {
                    cout << "Error: Square root is not defined for negative numbers!" << endl;
                }
                break;
            case 7:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << cubeRoot(num1) << endl;
                break;
            case 8:
                cout << "Enter total and part: ";
                                cin >> num1 >> num2;
                cout << "Result: " << percentage(num1, num2) << "%" << endl;
                break;
            case 9: {
                int count;
                cout << "How many numbers do you want to average? ";
                cin >> count;
                vector<double> numbers(count);
                cout << "Enter " << count << " numbers: ";
                for (int i = 0; i < count; ++i) {
                    cin >> numbers[i];
                }
                cout << "Result: " << average(numbers) << endl;
                break;
            }
            case 10:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << square(num1) << endl;
                break;
            case 11:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << cube(num1) << endl;
                break;
            case 12:
                cout << "Enter temperature in Celsius: ";
                cin >> num1;
                cout << "Result: " << celsiusToFahrenheit(num1) << " °F" << endl;
                break;
            case 13:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> num1;
                cout << "Result: " << fahrenheitToCelsius(num1) << " °C" << endl;
                break;
            case 14:
                cout << "Enter length in meters: ";
                cin >> num1;
                cout << "Result: " << metersToKilometers(num1) << " km" << endl;
                break;
            case 15:
                cout << "Enter length in kilometers: ";
                cin >> num1;
                cout << "Result: " << kilometersToMeters(num1) << " m" << endl;
                break;
            case 16:
                cout << "Enter weight in grams: ";
                cin >> num1;
                cout << "Result: " << gramsToKilograms(num1) << " kg" << endl;
                break;
            case 17:
                cout << "Enter weight in kilograms: ";
                cin >> num1;
                cout << "Result: " << kilogramsToGrams(num1) << " g" << endl;
                break;
            case 18:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please select a valid option." << endl;
                break;
        }
    } while (choice != 18);

    return 0;
}

double add(const vector<double>& numbers) {
    double sum = 0;
    for (double num : numbers) {
        sum += num;
    }
    return sum;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(const vector<double>& numbers) {
    double product = 1;
    for (double num : numbers) {
        product *= num;
    }
    return product;
}

double divide(double a, double b) {
    return a / b;
}

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double squareRoot(double a) {
    return sqrt(a);
}

double cubeRoot(double a) {
    return cbrt(a);
}

double percentage(double total, double part) {
    return (part / total) * 100;
}

double average(const vector<double>& numbers) {
    double sum = add(numbers);
    return sum / numbers.size();
}

double square(double a) {
    return a * a;
}

double cube(double a) {
    return a * a * a;
}
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double metersToKilometers(double meters) {
    return meters / 1000.0;
}

double kilometersToMeters(double kilometers) {
    return kilometers * 1000.0;
}

double gramsToKilograms(double grams) {
    return grams / 1000.0;
}
double kilogramsToGrams(double kilograms) {
    return kilograms * 1000.0;
}
void displayCalculator() {
    cout << "=========================" << endl;
    cout << "      CALCULATOR        " << endl;
    cout << "=========================" << endl;
}