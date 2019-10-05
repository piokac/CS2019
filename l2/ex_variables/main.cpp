#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char first_name[18], last_name[18];
    char full_name[28];
    cout << "What is your first name? ";
    cin >> first_name;
    cout << "What is your last name? ";
    cin >> last_name;

    //    strcpy(full_name, first_name);
    //    strcat(full_name, " ");
    //    strcat(full_name, last_name);

    sprintf(full_name, "%s %s", first_name, last_name);

    cout << "Hi " << full_name << endl;

    return 0;
}
