# Classes and Objects in C++
## Aim

Understand how to define and use classes and objects in C++, explore the difference between inside-class and outside-class function definitions, and learn how access specifiers (public, private) support encapsulation.

## Theory

In C++, classes and objects form the foundation of Object-Oriented Programming (OOP).

Class: A blueprint that defines variables (data members) and functions (member functions).

Object: A real instance of a class containing actual values.

Access Specifiers 
public → Accessible from outside the class 
private → Restricted to inside the class 
Used for encapsulation (data hiding & controlled access)

## Function Definitions

Inside Class: Function body is defined within the class declaration. 

Outside Class: Function is declared inside and defined outside using :: (scope resolution operator).

## Algorithms
1. Cube volume (outside class) <br>
   Start <br>
   Input side length <br>
   Calculate: volume = side³ <br>
   Display result <br>
   End <br>

2. Reverse Array
   Start <br>
   Define class ArrayOps with member function reverseArray(arr[], size). <br>
   In reverseArray(): <br>
   Loop from i = size - 1 down to 0. <br>
   Print each element arr[i]. <br>
   In main(): <br>
   Declare array arr[]; <br>
   Calculate size of array. <br>
   Create object obj. <br>
   Call obj.reverseArray(arr, size). <br>
   End <br>

3. Student Details
   Start <br>
   Define class Student with members: name, branch, year, result.<br>
   In main():<br>
   Create objects S1, S2, S3.<br>
   Assign details to each object.<br>
   Print required details.<br>
   End<br>

4. Calculator
   Start<br>
   Define class Calculator with members: num1, num2.<br>
   Add member functions:<br>
   add() → print num1 + num2.<br>
   subtract() → print num1 - num2.<br>
   multiply() → print num1 * num2.<br>
   divide() → if num2 != 0, print num1 / num2, else print error message.<br>
   In main():<br>
   Create object c.<br>
   Take input values for num1 and num2.<br>
   Call all four functions sequentially.<br>
   End<br>

## Conclusion

Class → Defines structure & behavior

Object → Real-world entity with data & functions

Key Insights:

Use inside-class methods for small programs

Use outside-class methods for cleaner code organization

Classes enable encapsulation, modularity, and reusability
