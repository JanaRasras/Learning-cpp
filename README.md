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




