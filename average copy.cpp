
#include <iostream>
using namespace std;

int main()
{
    
    double numberOne, numberTwo, numberThree, numberFour , numberFive, average;
    
    // Get five numbers.
    cout << "Please enter five numbers.\n";
    cin >> numberOne
    >>numberTwo
    >>numberThree
    >>numberFour
    >>numberFive;
    
    
    
    // Calculate the total cost.
    average = (numberOne + numberTwo + numberThree + numberFour + numberFive)/5;
    
    // Display the the total cost of the garden center.
    cout <<"The average of those numbers is:\n"<< average << endl;

    
    return 0;
}


