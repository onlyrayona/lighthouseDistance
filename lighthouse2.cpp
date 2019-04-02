// Lab 5
// Programmer: Rayona Young
// Editor(s) used: PyCharm CE
// Compiler(s) used: LLVM-GCC
//
#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>

int main ()
{

//input values

//code block to read height from keyboard as double
double height;
cout << "What's the lighthouse height in feet? ";
cin >> height;
cin.ignore(1000, 10);


// output (calculated values)

double distance = sqrt(0.8 * height);

// echoing input value (unformatted)

cout << "A " << height;

// formatted output value

cout.setf(ios::fixed);
cout << setprecision(0);
cout << " foot tall lighthouse can be seen from " << distance << " miles away" << endl;

}