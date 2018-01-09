
#include <iostream>
using namespace std;

int main()
{
    
    int cents,quaters, dimes, nickels, pennys;
    int a, b, c, d;
    // Get an amount in cents.
    cout << "Please enter an amount in cents less than a dollar.\n";
    cin >> cents;
    cin >> a;
    cin >> b;
    cin >> c;
    
    const int QUATER = 25;
    const int DIME = 10;
    const int NICKLE = 5;
    const int PENNY = 1;
    
    // represent that amount with the fewest total number of coins.
    quaters = cents / QUATER;
    dimes = cents % QUATER / DIME;
    nickels = cents % QUATER % DIME / NICKLE;
    pennys = cents % QUATER % DIME % NICKLE;
    
    // Display the change.
    cout <<"Your change will be:\n"
    <<"Q: "<< quaters << endl
    <<"D: "<<dimes << endl
    <<"N: "<<nickels << endl
    <<"P: "<< pennys << endl;
    
    return 0;
}
