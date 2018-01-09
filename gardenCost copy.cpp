

#include<iostream>
using namespace std;


int main()
{
    
    double soilCost, seedsCost, fenceCost, totalCost;
    
    // Get the soil cost.
    cout << "What does the soil cost?\n";
    cin >> soilCost;
    
    // Get the flower seeds cost.
    cout << "What do the flower seeds cost?\n";
    cin >> seedsCost;
    
    // Get the fence cost.
    cout <<"What does the fence cost?\n";
    cin >> fenceCost;
    
    // Calculate the total cost.
    totalCost = soilCost + seedsCost + fenceCost;
    
    // Display the the total cost of the garden center.
    cout <<"The total cost is "<< totalCost << endl;
    
    return 0;
}


