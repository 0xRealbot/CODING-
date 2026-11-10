# THIS WILL CONTAIN PROBELEMS TO CODEFRCES PROBLEM WITH LINKS .
https://codeforces.com/group/MWSDmqGsZm/contest/219158
## ABOVE IS THE LINK TO COFEFORCE FOR PRACTICE


# PROBLEM 1:SAY HELLO

![PROBLEM 1](<img width="923" height="401" alt="Screenshot 2026-11-10 110427" src="https://github.com/user-attachments/assets/825eba76-8a04-4319-8b6e-af4e481c79a8" />
)

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

The following lines show some C++ data types, their format specifiers and their most common bit widths:

int : 32 Bit integer.

long long : 64 bit integer

Char : 8 bit Characters & symbols

Float : 32 bit real value

Double : 64 bit real value

**Reading**

To read a data type, use the following syntax:

   cin >> VariableName; 
   
For example, to read a character followed by a double:

  char ch;
  
  double d;
  
  cin >> ch >> d; 
  
**Printing**

To print a data type, use the following syntax:

cout << VariableName; 

For example, to print a character followed by a double:

char ch = 'd';

double d = 234.432;

cout << ch << " "<< d; 

**Input**

Only one line containing the following space-separated values: int, long long, char, float and double respectively.

**Output**

Print each element on a new line in the same order it was received as input.


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

Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input

Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output

Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.

"X * Y = multiplication result" without quotes.

"X - Y = subtraction result" without quotes.


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


