//Documented Notes On C++

//Imports IO stream library.
#include <iostream>
#include <string>

using namespace std;
//A namespace is a collection of commands.
//These are required to avoid collisions between command names.

//Functions should be declared before main as a 'Forward Declaration' and defined after.
//C++ does not process whitespace; functions and procedures should be ended with a semi-colon.
int basics_lesson();
int variables_lesson();
int variable_types_lesson();
int user_input();

//The execution of all C++ programs is derived from a call to the main() function.
int main() //Declaration
{ //Definition

    //This is the only function executed by the compiler.
    //This is the body of the function.
    basics_lesson();
    variables_lesson();
    variable_types_lesson();
    user_input();
}

int basics_lesson()
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
    //Define variable type, name, and then value
    
    //Multiple variables can be defined under the same type, separate with commas
    
    /*
    Variable Types:
    1.Integer (int) Number w/o decimal. Gets 4 bytes of memory.
    2.Short Integer (short) Small number w/o decimal. Gets 2 bytes of memory.
    3.Floating Point Number (float) Small number w/ decimal. Gets 4 bytes of memory.
    4.Double (double) Large number w/ decimal. Gets 8 bytes of memory.
    5.Character (char) Single Character
    6.String (string) Multiple Characters
    7.Boolean (bool) True/False, 1/0
    */  
    int a = 20;
    short b = 100;
    float c = 5.2;
    double d = 420.69;
    char e = 'a';
    string f = "HelloWorld!";
    bool g = true;
    //Unsigned variables hold only positive values.
    unsigned short h = 60000;
    //Variables can be locked with 'const'.
    const string permanent = "permanent";

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << h << endl;
    cout << permanent << endl;
};

int user_input()
{
    string name;

    cout << "Enter your name: ";
    cin >> name; //Stores console input in $name.

    cout << "Your name is: " << name;
};