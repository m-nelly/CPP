//Documented Notes On C++

//Imports IO stream library.
#include <iostream>

using namespace std;
//A namespace is a collection of commands.
//These are required to avoid collisions between command names.

//Functions should be declared before main as a 'Forward Declaration' and defined after.
//C++ does not process whitespace; functions and procedures should be ended with a semi-colon.
int basics_lesson();
int variables_lesson();
int variable_types_lesson();

//The execution of all C++ programs is derived from a call to the main() function.
int main() //Declaration
{ //Definition

    //This is the only function executed by the compiler.
    //This is the body of the function.
    basics_lesson();
    variables_lesson();
}

int basics_leson()
{
    cout << "This is a test." << endl;
    //Sends "This is a test." to the console output and ends the line.
};

int variables_lesson()
{
    int x = 4;
    //Assigns a value of 4 to x.

    cout << x <<endl;
    //Prints 4 in the console out.

    /*
    1.Variables cannot be initialized twice.
    2.Variables cannot start with numbers.
    3.Variable names cannot contain spaces.
    4.Variable names should be descriptive.
    */
};

int variable_types_lesson()
{
  /*
  Variable Types:
  1.Integer
  2.
  3.
  */  
};
