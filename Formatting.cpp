

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.1415926;
    //shows 6 significant digits without control
    cout << PI << endl;

    cout << "Control the number of significant digits: \n";
    //cout << setprecision(3);
    cout << PI << endl;

    double a = 0.3141;
    double b = 21323.1;
    cout << a << endl;
    cout << b << endl;

    //cout << setprecision(5);
    cout << a << endl;

    a = 2;
    cout << "without control, a real value without fractional part: " << a << endl;
    cout << showpoint;
    cout << "force the value to be shown with a decimal point " << a << endl;

    //cout << setprecision(3);
    cout << "show the value using 3 significant digits: " << a << endl;

    double largerValue = pow(PI, 20);
    cout << "without control, larger values are shown in scientific notation: " << largerValue << endl;

    cout << fixed;
    cout << "shown in nonscientific notation way: " << largerValue << endl;
    cout << setprecision(2); //the following real values are shown using 2 
    cout << 4.5232 << endl;
    //decimal places
    cout << "shown iwth 2 places after decimal point " << largerValue << endl;
    //using fixed before set precision changes it from showing sig digs to decimal points

    cout << "the setting in effect here: " << PI << endl;

    cout << setw(2) << "C++" << endl; //specifies how many positions you want to show to make it right aligned
    cout << setw(15) << "C++" << endl; // only in effect for c++ not hello world, each needs its own
    cout << "Hello World!" << endl;
    cout << setw(5) << a << endl;

    cout << left;
    cout << setw(5) << a << "ending flag!" << endl;
    cout << setw(15) << a << "ending flag!" << endl;

    cout << sqrt(4) << endl;

    cout << setprecision(15) << "computed PI (PI is the radian of 180 degrees: " << acos(-1) << endl;

    double radian_30 = PI / 180 * 30;
    cout << setprecision(2);
    cout << "sine of 30 degrees: " << sin(radian_30) << endl;
    cout << "cosine of 30 degrees: " << cos(radian_30) << endl;
    cout << "tangent of 30 degrees: " << tan(radian_30) << endl;

}
