# 🚀 My Beginner Programming & C++ Journey

## THINGS WHICH WILL BE COVERED


-[x]C++ Syntax,

C++ Output,

C++ Comments,

C++ Variables

C++ User Input,

C++ Data Types,

C++ Operators,

C++ Strings,

C++ Math,

C++ Booleans,

C++ If...Else,

C++ Switch,

C++ While Loop,

C++ For Loop,

C++ Break/Continue,

C++ Arrays,

C++ Structures,

C++ Enums,

C++ References,

C++ Pointers,

C++ Memory Mgmt,

function,

errors,

classes,

ds.


#LANGUAGE COVERED

**C++;MARKDOWN!**


*FOR BEGINEERS*


## WHAT IS C++

C++ is a popular programming language.

C++ is used to create computer programs, and is one of the most used languages in game development.

C++ was developed as an extension of C, and both languages have almost the same syntax.



## WHY USE C++

C++ is one of the world's most popular programming languages.

C++ can be found in today's operating systems, Graphical User Interfaces, and embedded systems.

C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.

C++ is portable and can be used to develop applications that can be adapted to multiple platforms.

C++ is fun and easy to learn!

As C++ is close to C, C# and Java, it makes it easy for programmers to switch to C++ or vice versa.



***syntax**

#include <iostream> // it is a header file library that lets u input and output objects

using namespace std; //means that we can use names for objects and variables 

int main(){ //this is called function and any code inside the curly bracket will be executed

cout << "hello"; // this is an object which lets u output things

return 0; // ends the main function

} //curly bracket to actually end the function


**EXAMPLE**

#include <iostream>

using namespace std;

int main() {

  cout << "Hello World!";
  
  return 0;
  
}

RESULT : Hello World!



##STD :: // it can be used in place of using namespace std; like std::cout<<"hello world";


**EXAMPLE-**

#include <iostream>

int main() 

std:: cout << "Hello World!";

  return 0;
  
}

RESULT : Hello World!



A computer program is a list of "instructions" to be "executed" by a computer.

In a programming language, these programming instructions are called statements.

It is important to end the statement with semicolon

Most c++ programs contains multiple statements and they are executed one by one!


**EXAMPLE**

cout << "Hello World!";

cout << "Have a good day!";

return 0;

RESULT : Hello World!Have a good day!



You can add as many cout objects as you want. However, note that it does not insert a new line at the end of the output.

You can also use cout() to print numbers.

However, unlike text, we don't put numbers inside double quotes.


**EXAMPLE:**

#include <iostream>

using namespace std;

int main() {

  cout << 3;
  
  return 0;
  
}

RESULT : 3


You can also perform mathematical calculations


**EXAMPLE :**

cout << 3*4;

RESULT: 12


##To insert a new line in your output, you can use the \n character


**EXAMPLE:**

cout << "hello"<<"\n";

cout << "i am peter";

RESULT :

hello

i am peter


Comments can be used to explain C++ code, and to make it more readable. It can also be used to prevent execution when testing alternative code. Comments can be singled-lined or multi-lined.

Single-line comments start with two forward slashes (//).

Any text between // and the end of the line is ignored by the compiler (will not be executed).


**EXAMPLE:**

//this is a comment 

cout << "hello";

RESULT : hello (here comment is not read by compiler .)


## Multi-line comments start with /* and ends with */.

Any text between /* and */ will be ignored by the compiler

these are useful to write comments which are bigger than ususal.



Variables are containers for storing data values.

In C++, there are different types of variables (defined with different keywords),


**for example:**

int - stores integers (whole numbers), without decimals, such as 123 or -123

double - stores floating point numbers, with decimals, such as 19.99 or -19.99

char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

string - stores text, such as "Hello World". String values are surrounded by double quotes

bool - stores values with two states: true or false


to declare a variable we use:

variable variableName = value;


**EXAMPLE : int x=5; //it stores value of x as 5**


we can also change value of the variable by writing:

variable name=value;


**EXAMPLE**:int x=5;   x=10; //this changes value of x from 5 to 10


The cout object is used together with the << operator to display variables.

To combine both text and a variable, separate them with the << operator:


**Example**

int myAge = 35;

cout << "I am " << myAge << " years old."; // this results in : I am 35 years old.

To declare more than one variable of the same type, use a comma-separated list:


**Example**

int x = 5, y = 6, z = 50;

cout << x + y + z; 

RESULT : 61


##You can also assign the same value to multiple variables in one line:


**Example**

int x, y, z;

x = y = z = 50;

cout << x + y + z;

RESULT : 150


## All C++ variables must be identified with unique names.

These unique names are called identifiers.


## Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

## The general rules for naming variables are:

Names can contain letters, digits and underscores

Names must begin with a letter or an underscore (_)

Names are case-sensitive (myVar and myvar are different variables)

Names cannot contain whitespaces or special characters like !, #, %, etc.

Reserved words (like C++ keywords, such as int) cannot be used as names


## When you do not want others (or yourself) to change existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):


**EXAMPLE:**

const int minutesPerHour = 60;




## You have already learned that cout is used to output (print) values. Now we will use cin to get user input.

cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

In the following example, the user can input a number, which is stored in the variable x. Then we print the value of x:

**Example**

int x; 

cout << "Type a number: "; // Type a number and press enter

cin >> x; // Get user input from the keyboard

cout << "Your number is: " << x; // Display the input value



## The auto keyword automatically detects the type of a variable based on the value you assign to it.

It helps you write cleaner code and avoid repeating types, especially for long or complex types.

For example: Instead of writing int x = 5;, you can write:

**Example**

auto x = 5; // x is automatically treated as int



## Here's a real-life example of using different data types, to calculate and output the total cost of a number of items:

**Example**

// Create variables of different data types

int items = 50;

double cost_per_item = 9.99;

double total_cost = items * cost_per_item;

char currency = '$';

// Print variables

cout << "Number of items: " << items << "\n";

cout << "Cost per item: " << cost_per_item << currency << "\n";

cout << "Total cost = " << total_cost << currency << "\n";



## Operators are used to perform operations on variables and values.


## C++ divides the operators into the following groups:

Arithmetic operators

Assignment operators

Comparison operators

Logical operators

Bitwise operators


## Arithmetic operators are used to perform common mathematical operations.

**Example**

+	Addition	Adds together two values	x + y
+	
-	Subtraction	Subtracts one value from another	x - y
-	
*	Multiplication	Multiplies two values	x * y
*	
/	Division	Divides one value by another	x / y

%	Modulus	Returns the division remainder	x % y	

++	Increment	Increases the value of a variable by 1	++x	

--	Decrement	Decreases the value of a variable by 1	--x


**EXAMPLE:**

int x = 10;

int y = 3;

cout << (x + y) << "\n"; // 13

cout << (x - y) << "\n"; // 7

cout << (x * y) << "\n"; // 30

cout << (x / y) << "\n"; // 3 (integer division)

cout << (x % y) << "\n"; // 1

int z = 5;

++z;

cout << z << "\n"; // 6

--z;

cout << z << "\n"; // 5


## A list of all assignment operators:


=	,x = 5,	x = 5	

+=,	x += 3,	x = x + 3	

-=,	x -= 3,	x = x - 3	

*=,	x *= 3,	x = x * 3	

/=,	x /= 3,	x = x / 3	

%=,	x %= 3,	x = x % 3	

&=,	x &= 3,	x = x & 3	

|=,	x |= 3,	x = x | 3	

^=,	x ^= 3,	x = x ^ 3	

>>=,	x >>= 3,	x = x >> 3
>>
<<=	,x <<= 3,	x = x << 3


## Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.

**Example**

int x = 5;

int y = 3;

cout << (x > y); // returns 1 (true) because 5 is greater than 3


## COMPARISION OPERATORS

==	,Equal to		

!=,	Not equal		

>	,Greater than
>
<	,Less than	

>=,	Greater than or equal to
>
<=,	Less than or equal to


## As with comparison operators, you can also test for true (1) or false (0) values with logical operators.

SOME OPERATORS WITH NAME AND DISCRIPTIONA ARE FOLLOWING:-

&& -	Logical and,	Returns true if both statements are true

|| -	Logical or	,Returns true if one of the statements is true	

!-	Logical not,	Reverse the result, returns false if the result is true


## When a calculation contains more than one operator, C++ follows order of operations rules to decide which part to calculate first.


## Here are some common operators in C++, from highest to lowest priority:

() - Parentheses

*, /, % - Multiplication, Division, Modulus

+, - - Addition, Subtraction

>, <, >=, <= - Comparison
>
==, != - Equality

&& - Logical AND

|| - Logical OR

= - Assignment



## The + operator can be used between strings to add them together to make a new string. This is called concatenation:

Example

string firstName = "John ";

string lastName = "Doe";

string fullName = firstName + lastName;

cout << fullName;



## To get the length of a string, use the length() function:

Example

string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

cout << "The length of the txt string is: " << txt.length();



## You can access the characters in a string by referring to its index number inside square brackets [].

This example prints the first character in myString:

**Example**

string myString = "Hello";

cout << myString[0];

// Outputs H



## Because strings must be written within quotes, C++ will misunderstand this string, and generate an error

The solution to avoid this problem, is to use the backslash escape character.

The backslash (\) escape character turns special characters into string characters

\' 	-  '	Single quote

\" 	-   "	Double quote

\\  -	 \ 	Backslash



## It is possible to use the extraction operator >> on cin to store a string entered by a user:

**Example**

string firstName;

cout << "Type your first name: ";

cin >> firstName; // get user input from the keyboard

cout << "Your name is: " << firstName;

// Type your first name: John

// Your name is: John



## If you prefer to print true and false as words instead of 1 and 0, you can use the boolalpha manipulator:

**Example**

bool isCodingFun = true;

bool isFishTasty = false;

cout << boolalpha; // enable printing "true"/"false"

cout << isCodingFun << "\n";   // Outputs true

cout << isFishTasty << "\n";  // Outputs false


**Example**

Output "Old enough to vote!" if myAge is greater than or equal to 18. Otherwise output "Not old enough to vote.":

int myAge = 25;

int votingAge = 18;

if (myAge >= votingAge) {

  cout << "Old enough to vote!";
  
} else {

  cout << "Not old enough to vote.";
  
}
// Outputs: Old enough to vote!



## C++ has the following conditional statements:

Use if to specify a block of code to be executed, if a condition is true

Use else to specify a block of code to be executed, if the same condition is false

Use else if to specify a new condition to test, if the first condition is false

Use switch to specify many alternative blocks of code to be executed


## Use the if statement to specify a block of C++ code to be executed if a condition is true.

**Syntax**

if (condition) {

  // block of code to be executed if the condition is true}
  

Use the else statement to specify a block of code to be executed if the condition is false.

Syntax

if (condition) {

  // block of code to be executed if the condition is true
  
} else {

  // block of code to be executed if the condition is false
  
}


## Use the else if statement to specify a new condition to test if the first condition is false.

You can use else if to check multiple conditions, one after another.

**Syntax**

if (condition1) {

  // block of code to be executed if condition1 is true
  
} else if (condition2) {

  // block of code to be executed if condition1 is false and condition2 is true
  
} else {

  // block of code to be executed if both conditions are false
  
}


## you can also place an if statement inside another if. This is called a nested if statement.

A nested if lets you check for a condition only if another condition is already true.

**Syntax**

if (condition1) {

  // code to run if condition1 is true
  
  if (condition2) {
  
    // code to run if both condition1 and condition2 are true
    
  }
  
}


**Example**

int x = 15;

int y = 25;

if (x > 10) {

  cout << "x is greater than 10\n";
  
  // Nested if
  
  if (y > 20) {
  
    cout << "y is also greater than 20\n";
    
  }
  
}

RESULT:x is greater than 10

y is also greater than 20


**Real Life Example:**

This example shows how you can use if..else to "open a door" if the user enters the correct code:

Example

int doorCode = 1337;

if (doorCode == 1337) {

  cout << "Correct code.\nThe door is now open.\n";
  
} else {

  cout << "Wrong code.\nThe door remains closed.\n";
  
}


## Use the switch statement to select one of many code blocks to be executed.

**Syntax**

switch(expression) {

  case x:
  
    // code block

    break;
    
  case y:
  
    // code block
    
    break;
    
  default:
  
    // code block
    
}


## This is how it works:

The switch expression is evaluated once

The value of the expression is compared with the values of each case

If there is a match, the associated block of code is executed

The break and default keywords are optional, and will be described later in this chapter



int day = 4

switch (day){

case 1:

cout << "monday";

break;

case 2:

cout << "tuesday";

break;

case 3:

cout << "wednesday";

break;

case 4 :

cout << "thursday";

break;

}

//results thursday


## When C++ reaches a break keyword, it breaks out of the switch block.

This will stop the execution of more code and case testing inside the block.



## Loops can execute a block of code as long as a specified condition is reached.

Loops are handy because they save time, reduce errors, and they make code more readable.

The while loop loops through a block of code as long as a specified condition is true:

**Syntax**

while (condition) {

  // code block to be executed
  
}


## The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true. Then it will repeat the loop as long as the condition is true

**Syntax**

do {

  // code block to be executed
  
}

while (condition);



## When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:

**Syntax**

for (statement 1; statement 2; statement 3) {

  // code block to be executed
  
}


## Statement 1 is executed (one time) before the execution of the code block.

## statement 2 defines the condition for executing the code block.

## Statement 3 is executed (every time) after the code block has been executed.


## It is also possible to place a loop inside another loop. This is called a nested loop.

The "inner loop" will be executed one time for each iteration of the "outer loop":

**Example**


// Outer loop

for (int i = 1; i <= 2; ++i) {

  cout << "Outer: " << i << "\n"; // Executes 2 times
  
  // Inner loop
  
  for (int j = 1; j <= 3; ++j) {
  
    cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
    
  }
  
}


## you have already seen the break statement used in an earlier chapter of this tutorial. It was used to "jump out" of a switch statement.

The break statement can also be used to jump out of a loop.

This example jumps out of the loop when i is equal to 4:

**Example**

for (int i = 0; i < 10; i++) {

  if (i == 4) {

    break;
    
  }
  
  cout << i << "\n";
  
}

## C++ Continue

The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

This example skips the value of 4:

**Example**

for (int i = 0; i < 10; i++) {

  if (i == 4) {
  
    continue;
    
  }
  
  cout << i << "\n";
  

## arrays

Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the 

number of elements it should store:

**string cars[4];**

We have now declared a variable that holds an array of four strings. To insert values to it, we can use an array literal - place the values in a comma-separated list, inside curly braces:

**string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};**

**in C++, you don't have to specify the size of the array. The compiler is smart enough to determine the size of the array based on the number of inserted values**


## To get the size of an array, you can use the sizeof() operator:

**Example**

int myNumbers[5] = {10, 20, 30, 40, 50};

cout << sizeof(myNumbers);

## Why did the result show 20 instead of 5, when the array contains 5 elements?

It is because the sizeof() operator returns the size of a type in bytes.

You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

To find out how many elements an array has, you have to divide the size of the array by the size of the first element in the array:

**Example**

int myNumbers[5] = {10, 20, 30, 40, 50};

int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);

cout << getArrayLength;


## Multi-Dimensional Arrays

A multi-dimensional array is an array of arrays.

To declare a multi-dimensional array, define the variable type, specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have:

**string letters[2][4];**

## As with ordinary arrays, you can insert values with an array literal - a comma-separated list inside curly braces. In a multi-dimensional array, each element in an array literal is another array literal.

string letters[2][4] = {

  { "A", "B", "C", "D" },
  
  { "E", "F", "G", "H" }
  
};

## Each set of square brackets in an array declaration adds another dimension to an array. An array like the one above is said to have two dimensions.

Arrays can have any number of dimensions. The more dimensions an array has, the more complex the code becomes. The following array has three dimensions:

string letters[2][2][2] = {

  {
  
    { "A", "B" },
    
    { "C", "D" }
    
  }
  
  {
  
    { "E", "F" }
    
    { "G", "H" }
    
  }
  
}



## STRUCTURES

Structures (also called structs) are a way to group several related variables into one place.

Each variable in the structure is known as a member of the structure.

Unlike an array, a structure can contain many different data types: int, string, bool, etc.

**EXAMPLE**

struct {             // Structure declaration

  int myNum;         // Member (int variable)
  
  string myString;   // Member (string variable)
  
} myStructure;       // Structure variable


## ACCESSS STRUCTURE

To access members of a structure, use the dot syntax (.):

**Example**

Assign data to members of a structure and print it:

// Create a structure variable called myStructure

struct {

  int myNum;
  
  string myString;
  
} myStructure;

// Assign values to members of myStructure

myStructure.myNum = 1;

myStructure.myString = "Hello World!";

// Print members of myStructure

cout << myStructure.myNum << "\n";

cout << myStructure.myString << "\n";


## STRUCTURE CAN BE USEFUL TO SHOW BASIC DETAILS OF SOMETHING

**example**

struct {

  string brand;
  
  string model;
  
  int year;
  
} myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure

myCar1.brand = "BMW";

myCar1.model = "X5";

myCar1.year = 1999;

// Put data into the second structure

myCar2.brand = "Ford";

myCar2.model = "Mustang";

myCar2.year = 1969;

// Print the structure members

cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";

cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";


##  ENUMS

To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma:-

enum Level {

  LOW,
  
  MEDIUM,
  
  HIGH
  
};


## To access the enum, you must create a variable of it.

Inside the main() method, specify the enum keyword, followed by the name of the enum (Level) and then the name of the enum variable (myVar in this example):

enum Level myVar;


## A reference variable is an alias for an existing variable. It is created using the & operator

**string food = "Pizza";  // food variable

string &meal = food;    // reference to food**


## If you change the value of a reference variable, the original variable will also change (and vice versa), because they both refer to the same memory location:

**Example**

string food = "Pizza"; // food variable

string &meal = food;   // reference to food


meal = "Burger"; // changes both meal and food


cout << food << "\n"; // Outputs Burger

cout << meal << "\n"; // Outputs Burger


## memory address

In the example from the previous page, the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.

To access it, use the & operator, and the result will represent where the variable is stored:

**example**

string food = "Pizza";

cout << &food;

// Outputs 0x6dfed4

HERE THIS IS ADDRESS WHEE I WAS STORED



## POINTERS

A pointer however, is a variable that stores the memory address as its value.

A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer

**example**

string food = "Pizza";  // A food variable of type string

string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)

cout << food << "\n";

// Output the memory address of food (0x6dfed4)

cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)

cout << ptr << "\n";

**example explained**

Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr). Note that the type of the pointer has to match the type of the variable you're working with.

Use the & operator to store the memory address of the variable called food, and assign it to the pointer.

Now, ptr holds the value of food's memory address.


## in the example from the above, we used the pointer variable to get the memory address of a variable (used together with the & reference operator). However, you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):

**Example**

string food = "Pizza";  // Variable declaration

string* ptr = &food;    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)

cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)

cout << *ptr << "\n";


## You can also change the pointer's value. But note that this will also change the value of the original variable:

**Example**

string food = "Pizza";

string* ptr = &food;

// Output the value of food (Pizza)

cout << food << "\n";

// Output the memory address of food (0x6dfed4)

cout << &food << "\n";

// Access the memory address of food and output its value (Pizza)

cout << *ptr << "\n";

// Change the value of the pointer

*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)

cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)

cout << food << "\n";



## memory management

Memory management is the process of controlling how much memory your program uses - and how it is used. This includes creating, using, and releasing memory when it's no longer needed.

When you create a variable in C++, the compiler automatically reserves space in memory for it.

**For example:**

int myNumber = 10;

The line above tells the program: "I need space to store an integer." C++ handles this memory automatically, so in this case, you dont have to worry about managing memory.

## You can check how much memory a variable type uses with the sizeof operator:

**Example**

#include <iostream>

using namespace std;

int main() {

  int myInt;
  
  float myFloat;
  
  double myDouble;
  
  char myChar;
  
  cout << sizeof(myInt) << "\n";     // 4 bytes (typically)
  
  cout << sizeof(myFloat) << "\n";   // 4 bytes
  
  cout << sizeof(myDouble) << "\n";  // 8 bytes
  
  cout << sizeof(myChar) << "\n";    // 1 byte
  
return 0;}


## Do You Have to Manage Memory Yourself?

Sometimes yes - and sometimes no.

For normal variables (like int x = 10;), C++ takes care of the memory for you.

But when you want to create memory manually while the program is running (for example: based on user input), you need to manage it yourself and clean it up when you're done.

If your program uses too much memory, or forgets to clean up memory it no longer needs, it can lead to slow performance or even crashes.

That's why understanding memory is important. It gives you more control and helps avoid common bugs.


## The new keyword lets you manage memory yourself.

In the example below, we create memory space for an integer using new, store the value 35 in it, and print it using a pointer:

**Example**

int* ptr = new int;

*ptr = 35;

cout << *ptr;


## When you create something with new, it's your job to remove it when you're done.

To do that, use delete:

**Example**

delete ptr;


**Example**

#include <iostream>

#include <string>

using namespace std;


int main() {

  int numGuests;
  
  cout << "How many guests? ";
  
  cin >> numGuests;
  

  // Check for invalid input
  
  if (numGuests <= 0) {
  
    cout << "Number of guests must be at least 1.\n";
    
    return 0;
    
  }
  

  // Create memory space for x guests (an array of strings)
  
  string* guests = new string[numGuests];
  

  // Ignore the leftover newline character after reading numGuests
  
  cin.ignore();
  

  // Enter guest names
  
  for (int i = 0; i < numGuests; i++) {
  
    cout << "Enter name for guest " << (i + 1) << ": ";
    
    getline(cin, guests[i]); // Read the full name (including spaces)
    
  }
  

  // Show all guests
  
  cout << "\nGuests checked in:\n";



  for (int i = 0; i < numGuests; i++) {
  
    cout << guests[i] << "\n";
    
  }
  

  delete[] guests; // Clean up memory
  
  return 0;
  
}


## When to Use new

In most cases, you don't need to use new. C++ will automatically handle memory for normal variables like:

**int age = 35;

string name = "John";**

But sometimes, you have to manage memory yourself - especially when:

You don't know how much memory you'll need in advance (like how many guests or scores)

You want to create memory while the program is running, based on user input

You need to store large or flexible amounts of data

You want full manual control over memory (e.g., performance-critical code)
