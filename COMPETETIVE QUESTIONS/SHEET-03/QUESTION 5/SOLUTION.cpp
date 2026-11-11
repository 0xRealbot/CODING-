#include <iostream>

#include <iomanip>

using namespace std;

int main() {

    // 1. Create a variable for the radius
    
    double R;
    
    cin >> R;
    
    // 2. Define the exact value of pi given in the problem
    
    double PI = 3.141592653;
    
    // 3. Calculate the area (R squared is just R * R)
    
    double area = PI * R * R;

    // 4. Print the result with exactly 9 decimal places
    
    cout << fixed << area << endl;

    return 0;
    
}

