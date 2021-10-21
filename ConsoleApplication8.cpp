#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
// коментар для практичної
using namespace std;
int main()
{
    int min, max;
    float x, h, y;

    cout << "Enter min =";
    cin >> min;
    cout << "Enter max =";
    cin >> max;
    cout << "Enter h =";
    cin >> h;


    x = min;
    cout << "\t x" << "\ty(x)" << endl;
    while (x <= max + h / 2)
    {
        y = tan(x * M_PI / 180) + sqrt(x) + 2;
        cout << setw(10) << x << setw(10) << setprecision(3) << y << endl;
        x += h;
    }



    cout << "Do....While" << endl;
    x = min;
    cout << "\t x" << "\ty(x)" << endl;
    do
    {
        y = tan(x * M_PI / 180) + sqrt(x) + 2;
        cout << setw(10) << x << setw(10) << setprecision(3) << y << endl;
        x += h;
    } while (x <= max + h / 2);

}
