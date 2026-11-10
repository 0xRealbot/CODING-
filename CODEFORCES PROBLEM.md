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
![](https://github.com/medhanshmithukhatri-star/CODING-/blob/878c4a5b498076866e2c4742b26c52c183ac2e1d/PHOTO/Screenshot%202026-11-10%20111338.png)

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


 ## PROBLEM 5:AREA OF CIRCLE
   ![](https://github.com/medhanshmithukhatri-star/CODING-/blob/4298e1c8fb7a05b6800df1b418791ad4cf7d03c9/PHOTO/Screenshot%202026-11-10%20111357.png) 
    
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


## PROBLEM 6:DIGITS SUMMATION
![](https://github.com/medhanshmithukhatri-star/CODING-/blob/2633bf6dce5a6a7ca9f99d7047f40abfb6dd515f/PHOTO/Screenshot%202026-11-10%20114728.png)


## SOLUTION :

#include <iostream>

using namespace std;

int main(){

    long long n,m;
    
    cin >> n;
    
    cin >> m;
    
    long long x=n%10;
    
    long long y=m%10;
    
    cout << x+y;
    
    return 0;
    
}


## PROBLEM 7: SUMMATION FROM 1 TO N
![](https://github.com/medhanshmithukhatri-star/CODING-/blob/9f95c47487651f8b9f0d76f8056ae1514d50f3bc/PHOTO/Screenshot%202026-11-10%20122852.png)

## SOLUTION :

#include <iostream>

using namespace std;

int main(){

    long long n;
    
    cin >> n;
    
    long long y = n*(n+1)/2;
    
    cout << y;
    
    return 0;
    
}
