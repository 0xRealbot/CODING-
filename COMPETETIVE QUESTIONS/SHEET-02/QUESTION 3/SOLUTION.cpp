#include <iostream>

using namespace std;

int main() {

    // Using long long to safely handle multiplication results up to 10^10
    
    long long x, y;  
    
    // Reading the two space-separated numbers
    
    cin >> x >> y; 
    
    // Printing the results exactly in the requested format
    
    cout << x << " + " << y << " = " << x + y << "\n";
    
    cout << x << " * " << y << " = " << x * y << "\n";
    
    cout << x << " - " << y << " = " << x - y << "\n"; 
    
    return 0;
    
}
