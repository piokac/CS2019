#include <iostream>

using namespace std;

int main()
{
    cout << "char - " << sizeof(char) << endl;
    cout << "int - " << sizeof(int) << endl;
    cout << "long - " << sizeof(long) << ", min value: "<< INT64_MIN << "max value: " << INT64_MAX << endl;
    cout << "long long - " << sizeof(long long) << endl;

    cout << "float - " << sizeof(float) << endl;
    cout << "double - " << sizeof(double) << endl;
    cout << "long double - " << sizeof(long double) << endl;

    //literal constants
    cout << sizeof(1.0);
    return 0;
}
