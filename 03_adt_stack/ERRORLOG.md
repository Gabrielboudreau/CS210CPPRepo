# Error Log

Notes: No major compiler errors, just errors in code
## Error 1: 
REAL ERROR: "Class Stack has no member 'top' of type int() const"

TIME: 1:21 09/14/26

CAUSE: Top was not provided in the sample Stack.h file in the assignment

FIX: Add int top() to Stack.h

## ERROR 2: 
REAL ERROR: "Function void Stack::pop() has already been declared with return type int"

TIME: 1:17 09/14/26

CAUSE: Sample Stack.h had pop incorrectly defined as int

FIX: Since there is no return I changed the data type to void