# Simple Income Calculator

This is a simple C++ program that calculates income after applying an interest rate. It takes the initial amount of money and the interest rate as input and uses a function called `blad` to calculate the final income.

## Code Explanation

#include <iostream>
#define p cout
#define i cin
using namespace std;

Define a function 'blad' that calculates income with a default interest rate of 1.06.
float blad(int currentMoney, float interestGiven = 1.06) {
    return currentMoney * interestGiven;
}

int main() {
    int money; 
    float interest;

    p << "Enter your income / money: ";
    i >> money;

    p << "\nEnter your interest rate: ";
    i >> interest;

    p << "\nYour income after " << interest << " interest rate is: " << blad(money, interest);
}

## Code Details
It uses the iostream library for input/output.
p is used as a shorthand for cout, and i is used as a shorthand for cin for brevity.
The blad function calculates income with a default interest rate of 1.06 if no interest rate is provided.
In the main function, it prompts the user to enter the initial money and interest rate.
It then calculates and displays the income after applying the provided interest rate.

## Usage
To use this program, follow these steps:

Compile the program using a C++ compiler.
Run the compiled executable.
Enter your initial money and interest rate when prompted.
The program will calculate and display your income after applying the interest rate. 

## Example
Here's an example of how to use the program:

Enter your income / money: 1000
Enter your interest rate: 1.1
Your income after 1.1 interest rate is: 1100

## Author
Devang
