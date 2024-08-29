    // Sean Coffman 8/28/24
    // functionPractice.cpp


#include <iostream>
using namespace std;

// Function prototypes go here.
string oddOrEven(int);

// Create and sue the following four functions
int sumTwoWholeNumbers(int,int);
int squareANumber(int);
string sayHelloToTheUser(string);
int largestOfThree(int,int,int);


int main() {
    cout << "\nWelcome to my Functions Program!" << endl;

    string name;

    cout << "\nPlease enter your name: ";
    getline(cin, name);
    cout << "\nHello, " << name << " nice to meet you. I hope you are having a wonderful day!" << endl;

    int num1;
    int num2;
    int product;

    cout << "\nEnter two numbers: ";

    cin >> num1 >> num2;

    product = num1 * num2;

    cout << "\nThe product of your two inputs is: " << product << endl;


    string oddOrEvenString = "";

    int squareInput;
    int squareOutput;

    cout << "\nEnter a number to square: ";
    cin >> squareInput;

    squareOutput = squareInput * squareInput;

    cout << "\nYour number squared is: " << squareOutput << endl;



    int userInpt = 0;
    // Get input from the user
    cout << "\nEnter your number: ";
    cin >> userInpt;

    // call the oddOrEven function
    oddOrEvenString = oddOrEven(userInpt);
    cout << "\nThe input number was: " << oddOrEvenString << endl;

    int n1;
    int n2;
    int n3;
    int largest = 0;

    cout << "\nEnter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2 && n1 >= n3)
        cout << "\nThe largest number of the three inputs is: " << n1 << endl;

    else if (n2 >= n1 && n2 >= n3)
        cout << "\nThe largest number of the three inputs is: " << n2 << endl;

    else
        cout << "\nThe largest number of the three inputs is: " << n3 << endl;

    return 0;
}

    string oddOrEven(int userInpt) {
        string myReturnStr = "";

    if (userInpt % 2 == 0) {
        // This is the true side.
        // Num1 is even.
        myReturnStr = "Even";
    }
    else {
        // This is the false side.
        // Num1 is odd.
        myReturnStr = "Odd";
    }
    return myReturnStr;
}
