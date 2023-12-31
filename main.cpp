#include <iostream>
#include "functions.h"

using namespace std;

//Homework
int main() {
    int choice;
    // ������ ����� ��� ������ ��������
    cout << "Enter the operation number:\n";
    cout << "1. Calculate power\n";
    cout << "2. Calculate sum in range\n";
    cout << "3. Find perfect numbers in range\n";
    cout << "4. Print a card\n";
    cout << "5. Check lucky number\n";
    cin >> choice;

    switch (choice) {
    case 1: {
        // ��� ������� power
        //�������� �������, ��� ������ ��� ���������: ������ ������� �� �������� ������� � �������� ������ ����� �� ����� ��������� �����.
        int base, exponent;
        cout << "Enter base and exponent: ";
        cin >> base >> exponent;
        int result = power(base, exponent);
        cout << "Result: " << result << endl;
        break;
    }
    case 2: {
        // ��� ������� sumInRange
        //�������� �������, ��� ������ �� ��������� 2 ����� ����� � ������� ���� ����� � �������� �� ����.
        int num1, num2;
        :cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int sum = sumInRange(num1, num2);
        cout << "Sum: " << sum << endl;
        break;
    }
    case 3: {
        // ��� ������� findPerfectNumbersInRange
        //����� ���������� ����������, ���� ���� ��� ���� ������� ������� ���� ������. �������� ������� ������ ����� ����� � ��������� ��������.
        int start, end;
        cout << "Enter start and end numbers: ";
        cin >> start >> end;
        findPerfectNumbersInRange(start, end);
        break;
    }
    case 4: {
        // ��� ������� printCard
        //�������� �������, �� �������� �� ����� �������� �� ������� �����.
        int card;
        cout << "Enter a card number: ";
        cin >> card;
        printCard(card);
        break;
    }
    case 5: {
        // ��� ������� isLuckyNumber
        //�������� �������, ��� �������, �� � "��������" ����������� �����.
        int number;
        cout << "Enter a number: ";
        cin >> number;
        bool isLucky = isLuckyNumber(number);
        if (isLucky) {
            cout << number << " is a lucky number" << endl;
        }
        else {
            cout << number << " is not a lucky number" << endl;
        }
        break;
    }
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}

int main() {
    int choice;
    cout << "Enter the task number:\n";
    cout << "1. Print rectangle\n";
    cout << "2. Calculate factorial\n";
    cout << "3. Check prime number\n";
    cout << "4. Calculate cube\n";
    cout << "5. Find the larger of two numbers\n";
    cout << "6. Check if a number is positive\n";
    cin >> choice;

    switch (choice) {
    case 1: {
        //�������� �������, �� �������� �� ����� ����������� � ������� N � ������� K.
        int height, width;
        cout << "Enter height and width of the rectangle: ";
        cin >> height >> width;
        printRectangle(height, width);
        break;
    }
    case 2: {
        //�������� �������, ��� �������� �������� ���������� �� �����.
        int n;
        cout << "Enter a number: ";
        cin >> n;
        int factorial = calculateFactorial(n);
        cout << "Factorial: " << factorial << endl;
        break;
    }
    case 3: {
        //�������� �������, ��� ��������, �� � �������� �� ����� �������. ����� ���������� �������, ���� ���� ������� ��� ������� ����� �� ���� �� �� �������.
        int number;
        cout << "Enter a number: ";
        cin >> number;
        bool isPrime = checkPrimeNumber(number);
        if (isPrime) {
            cout << number << " is a prime number" << endl;
        }
        else {
            cout << number << " is not a prime number" << endl;
        }
        break;
    }
    case 4: {
        //�������� �������, ��� ������� ��� �����.
        int number;
        cout << "Enter a number: ";
        cin >> number;
        int cube = calculateCube(number);
        cout << "Cube: " << cube << endl;
        break;
    }
    case 5: {
        //�������� ������� ��� ����������� ���������� � ���� �����.
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int larger = findLargerNumber(num1, num2);
        cout << "Larger number: " << larger << endl;
        break;
    }
    case 6: {
        //�������� �������, ��� ������� ������, ���� �������� �������� ������� � ����, ���� ��'����.
        int number;
        cout << "Enter a number: ";
        cin >> number;
        bool isPositive = isPositiveNumber(number);
        if (isPositive) {
            cout << number << " is a positive number" << endl;
        }
        else {
            cout << number << " is not a positive number" << endl;
        }
        break;
    }
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}