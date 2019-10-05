#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int height, weight;
    cout << "enter your height";
    cin >> height;
    cout << "enter your weight";
    cin >> weight;

    double BMI = weight / pow(height / 100.0, 2);
    cout << "Your BMI is" << BMI << endl;

    return 0;
}
