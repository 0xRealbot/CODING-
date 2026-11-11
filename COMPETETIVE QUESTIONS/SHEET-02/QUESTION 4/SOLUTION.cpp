#include <iostream>

using namespace std;

int main() {

    // Using long long to prevent overflow since inputs can be up to 10^5
    
    // and multiplying them can reach 10^10 or -10^10.
    
    long long A, B, C, D;
    
    // Reading 4 space-separated numbers
    
    cin >> A >> B >> C >> D;    
    
    // Calculating the result
    
    long long X = (A * B) - (C * D); 
    
    // Printing the output exactly as requested
    
    cout << "Difference = " << X << "\n";    
    
    return 0;
    
    }

