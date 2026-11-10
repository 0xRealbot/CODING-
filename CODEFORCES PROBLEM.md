# THIS WILL CONTAIN PROBELEMS TO CODEFRCES PROBLEM WITH LINKS .
https://codeforces.com/group/MWSDmqGsZm/contest/219158
## ABOVE IS THE LINK TO COFEFORCE FOR PRACTICE


# PROBLEM 1:SAY HELLO
![.](https://github.com/medhanshmithukhatri-star/CODING-/blob/f831ccd47e5152c1b0e34506d996dba66a8c00fb/PHOTO/Screenshot%202026-11-10%20110427.png)
## SOLUTION:

#include <iostream>

#include <string> // Added this to fix the compilation error

using namespace std;

int main(){

    string x = "Hello";string y ;
    
    cin >> y;
    
    cout << x << ", " << y;
    
    return 0;
    
}



### PROBLEM 2:BASIC DATA TYPES

![,](https://github.com/medhanshmithukhatri-star/CODING-/blob/747b45d08e3083392d1b6f48e94c65d85fe7976b/PHOTO/Screenshot%202026-11-10%20111238.png)

## SOLUTION:

#include <iostream>

using namespace std;

int main() {

    int i;
    
    long long ll;
    
    char ch;
    
    float fl;
    
    double d;
    
    // Reading space-separated values
    
    cin >> i >> ll >> ch >> fl >> d;
    
    // Printing each value on a new line
    
    cout << i << "\n";
    
    cout << ll << "\n";
    
    cout << ch << "\n";
    
    cout << fl << "\n";
    
    cout << d << "\n";
    
    return 0;
    
}



### PROBLEM 3:SIMPLE CALCULATOR
![](https://github.com/medhanshmithukhatri-star/CODING-/blob/4c1c0ef0e7ab64fec5e93a8c9f48a47bc67c717f/PHOTO/Screenshot%202026-11-10%20111323.png)

## SOLUTION:

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



### PROBLEM 4:DIFFERENCE

Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).
 
Input

Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output

Print "Difference  =  " without quotes followed by the equation result.


## SOLUTION:

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


    ### PROBLEM 5:AREA OF CIRCLE
    
    Given a number R calculate the area of a circle using the following formula:
    
Area = π * R2.

Note: consider π = 3.141592653.

Input

Only one line containing the number R (1  ≤  R  ≤  100).

Output

Print the calculated area, with 9 digits after the decimal point.


## SOLUTION:

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


