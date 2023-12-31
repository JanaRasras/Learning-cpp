# Learning-cpp
# C++
## _C++ Programming  from problem analysis to program desgin by D.S. Malik_
#### _Jana Rasras_
##### August 2023

## Chapter 2 Basics elements of a C++ 
- A C++ is a collection of functions.
- Every C++ program has a function called main.
- A single line comment start with // anywhere in the line.
- Multiline comments are enclosed between /* and */.
- Reserved words can't be used as identifier in a program.
- All reserved words consist of lowercase letters.
- Identifiers are name of things.
- An identifier consist of letters, digits, and underscores and must begin with letter or underscore. 
- C++ data types are: simle, structured, and pointers. 
- Simple has three categories: integral, floating-point, and enumeration. 
- Integral data types are classified into 9 categories: char, short, int, long, bool, unsigned char, unsigned short, unsigned int and unsigned long.
- bool has two types: true and false. 
- C++ provides 3 data types to manipulate decimale numbers: float, double, and long double. 
- In C++ , >> is called stream extraction operator.
- Input from the standrd input device is accomlished by using cin and >>.
- In C++ , << is called stream insertion operator.
- Output fof the program is accomlished by using cout and <<.
- The manipulator endlpositions the insertion point at the begning of the next lines on an output device.
- The \ charchter is called the escape charchter.
- The sequence \n is called the newline escape charchter. 
- All preprocessor commands start with the symbol #.
- The # include<iostream> instruct the preprocessor to include the header file iostream in the program.
- To use the cin and cout , you must include using namespace std.
- All C++ statements ends with a semicolon.
- The extenstion is .cpp. 

## Chapter 3 | Input/Output
- A stream in C++ is an infinite sequence of characters from a source to a
destination.
- When inputting data into a variable, the operator >> skips all leading whitespace characters.
- To use cin and cout, the program must include the header file iostream.
- The function get is used to read data on a character-by-character basis and
does not skip any whitespace characters.
- The function ignore is used to skip data in a line.
e.g: cin.ignore(100, '\n'):ignores either the next 100 char or all until newline.
- The function putback puts the last character 
retrieved by the function get
back into the input stream.
cin.putback(ch);
- The function peek returns the next character from the input stream but
does not remove the character from the input stream.
cin.peek();
- Attempting to read invalid data into a variable causes the input stream to
enter the fail state.
- Once an input failure has occurred, you use the function clear to restore
the input stream to a working state.
- The manipulator setprecision formats the output of floating-point
numbers to a specified number of decimal places.
- The manipulator fixed outputs floating-point numbers in the fixed
decimal format.
e.g: (3.45000e-1 -> 35.4000)
- The manipulator showpoint outputs floating-point numbers with a
decimal point and trailing zeros.
- The manipulator setw formats the output of an expression in a specific
number of columns; the default output is right-justified.
- If the number of columns specified in the argument of setw is less than the
number of columns needed to print the value of the expression, the output
is not truncated and the output of the expression expands to the required
number of columns.
- The manipulator setfill is used to fill the unused columns on an output
device with a character other than a space.
- If the number of columns specified in the setw manipulator exceeds the
number of columns required by the next expression, the output is rightjustified.
To left-justify the output, you use the manipulator left.
- To use the stream functions get, ignore, putback, peek, clear, and unsetf
for standard I/O, the program must include the header file iostream.
- To use the manipulators setprecision, setw, and setfill, the program
must include the header file iomanip.
- The header file fstream contains the definitions of ifstream and ofstream.
- For file I/O, you must use the statement #include< fstream> to include the
header file fstream in the program. You must also do the following: declare
variables of type ifstream for file input and of type ofstream for file output
and use open statements to open input and output files. You can use <<, >>,
get, ignore, peek, putback, or clear with file stream variables.
- To close a file as indicated by the ifstream variable inFile, you use the
statement inFile.close();. To close a file as indicated by the ofstream
variable outFile, you use the statement outFile.close();.

## Chapter 4 | CONTROL STRUCTURES I(SELECTION)
- The two most common control structures are selection and repetition.
- There are two selection structures in C++. 
- One-way selection takes the following form:
if and if .. else.
- The switch structure is used to handle multiway selection.
- The execution of a break statement in a switch statement immediately
exits the switch structure.
- If certain conditions are not met in a program, the program can be
terminated using the assert function.
- conditinal operator: (?:) . if exp1 evaluates to true, the result is exp2, otherwise, the result is exp3.
  ```sh
  exp1? exp2:exp3
  ```



## Chapter 5 | Control Structures II (Repetition)
- C++ has three looping (repetition) structures: while, for, and
do. . .while.
-  The syntax of the while statement is:
```sh
while (expression)
statement
```

-  In C++, while is a reserved word.
- In the while statement, the parentheses around the expression (the
decision maker) are important; they mark the beginning and end of the
expression.
-  The statement is called the body of the loop.
- The body of the while loop must contain a statement that eventually sets
the expression to false.
-  A counter-controlled while loop uses a counter to control the loop.
- In a counter-controlled while loop, you must initialize the counter before
the loop, and the body of the loop must contain a statement that changes
the value of the counter variable.
- A sentinel is a special value that marks the end of the input data. The
sentinel must be similar to, yet differ from, all the data items.
- A sentinel-controlled while loop uses a sentinel to control the while
loop. The while loop continues to execute until the sentinel is read.
- An EOF-controlled while loop continues to execute until the program
detects the end-of-file marker.

- A for loop simplifies the writing of a counter-controlled while loop.
- In C++, for is a reserved word.
- The syntax of the for loop is:
```sh
for (initialize statement; loop condition; update statement)
statement
``` 
- Putting a semicolon at the end of the for loop (before the body of the for
loop) is a semantic error. In this case, the action of the for loop is empty.

The syntax of the do. . .while statement is:
```sh
do
statement
while (expression);
```

- Both while and for loops are called pretest loops. A do. . .while loop is
called a posttest loop.
- The while and for loops may not execute at all, but the do. . .while loop
always executes at least once.
- Executing a break statement in the body of a loop immediately terminates
the loop.
- Executing a continue statement in the body of a loop skips the loop’s
remaining statements and proceeds with the next iteration.
- When a continue statement executes in a while or do. . .while loop,
the expression update statement in the body of the loop may not execute.
- After a continue statement executes in a for loop, the update statement
is the next statement executed.

## Chapter 6 | USER-DEFINED FUNCTIONS I
- The C++ system provides the standard (predefined) functions.
- To use a standard function, you must:
 - -  Know the name of the header file that contains the function’s specification,
- -  Include that header file in the program, and
- - Know the name and type of the function and number and types of the parameters (arguments).
- There are two types of user-defined functions: value-returning functions and void functions.
- Variables defined in a function heading are called formal parameters.
- Expressions, variables, or constant values used in a function call are called
actual parameters.
- In a function call, the number of actual parameters and their types must match with the formal parameters in the order given.
- To call a function, use its name together with the actual parameter list.
- A value-returning function returns a value. Therefore, a value-returning
function is used (called) in either an expression or an output statement or as
a parameter in a function call.
- The general syntax of a user-defined function is:
```sh
functionType functionName(formal parameter list)
{
statements
}
```
- The line functionType functionName(formal parameter list) is
called the function heading (or function header). Statements enclosed
between braces ({ and }) are called the body of the function.
- The function heading and the body of the function are called the definition
of the function.
- A value-returning function returns its value via the return statement.
- A function can have more than one return statement. However, whenever
a return statement executes in a function, the remaining statements
are skipped and the function exits.
- A return statement returns only one value.
- In a program, function prototypes are placed before every function definition,
including the definition of the function main.
-  When a function exits, the control goes back to the caller.

## Chapter 7 | USER-DEFINED FUNCTIONS II
- A function that does not have a data type is called a void function.
- A return statement without any value can be used in a void function. If a return
statement is used in a void function, it is typically used to exit the function early.
- The heading of a void function starts with the word void.
- A void function may or may not have parameters.
- The corresponding actual parameter of a value parameter is an expression, a variable, or a constant value
- When you include & after the data type of a formal parameter, the formal
parameter becomes a reference parameter.
- If a formal parameter needs to change the value of an actual parameter, in the
function heading, you must declare this formal parameter as a reference parameter.
- Variables declared within a function (or block) are called local variables.
- Variables declared outside of every function definition (and block) are
called global variables.
- A static variable is a variable for which memory remains allocated throughout
the execution of the program.
- By default, global variables are static variables.
- If you do not specify the value of a default parameter, the default value is
used for that parameter.
- The calling function has the option of specifying a value other than the
default for any default parameter
- You cannot assign a constant value as a default value to a reference parameter.


