// Lab 4
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

int height = 100;

// output (calculated values)

double distance = sqrt(0.8 * height);

// echoing input value (unformatted)

cout << "A " << height;

// formatted output value

cout.setf(ios::fixed);
cout << setprecision(0);
cout << " foot tall lighthouse can be seen from " << distance << " miles away" << endl;

}