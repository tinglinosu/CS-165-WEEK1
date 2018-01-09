

#include <iostream>
using namespace std;

int main()
{
    
    double celTemperature,fahTemperature;
    
    // Get the Celsius temperature.
    cout << "Please enter a Celsius temperature.\n";
    cin >> celTemperature;
    
    
    // Converts Celsius temperatures to Fahrenheit temperature.
    fahTemperature = 9 * celTemperature / 5 + 32;
    
    // Display the the Fahrenheit temperature.
    cout <<"The equivalent Fahrenheit temperature is:\n"<< fahTemperature << endl;
    
    return 0;
}

