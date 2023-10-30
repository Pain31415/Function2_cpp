#include "functions.h"
#include <iostream>

using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int sumInRange(int num1, int num2) {
    int sum = 0;
    for (int i = num1; i <= num2; ++i) {
        sum += i;
    }
    return sum;
}

void findPerfectNumbersInRange(int rangeStart, int rangeEnd) {
    for (int i = rangeStart; i <= rangeEnd; ++i) {
        int sum = 0;
        for (int j = 1; j < i; ++j) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            cout << i << " is a perfect number" << endl;
        }
    }
}

void printCard(int card) {

}

bool isLuckyNumber(int number) {

}


void printRectangle(int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int calculateFactorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

bool checkPrimeNumber(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int calculateCube(int number) {
    return number * number * number;
}

int findLargerNumber(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

bool isPositiveNumber(int number) {
    return number > 0;
}