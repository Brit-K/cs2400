/*
 *        File: swap-ref-params.cc
 *      Author: Nasseef Abukamail
 *        Date: February 22, 2019
 * Description: A program to demonstrate reference parameters
 *              It implements the swap function.
 *              Compile and run the program and test it for several values.
 *
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

// function prototypes
void swap(int &num1, int &num2);

int main(int argc, char const *argv[]) {
    int first, second;
    cout << "Enter first value followed by second value" << endl;
    cin >> first >> second;
    cout << "Before swap" << endl;
    cout << "first = " << first << endl;
    cout << "second = " << second << endl;

    swap(first, second);
    cout << "After swap" << endl;
    cout << "first = " << first << endl;
    cout << "second = " << second << endl;
    cout << "Read the bottom of this program file for extra credit" << endl;
    return 0;
}  // main
void swap(int &num1, int &num2) {
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

/* Extra credit: Due: Sunday, 2/24/2019, 11:59 PM.
 *               Write a function called metricToEnglish that takes two values (meters, centimeters)
 *               and returns feet and inches (hint: use reference parameters).
 *               Write a main program to test it.
 *               Upload your program to a public repository on GitHub and tag me (@nasseef) in your
 *               final commit message.
 *
 */