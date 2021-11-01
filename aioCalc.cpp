#include <iostream>

using namespace std;

int gcd(int x, int y)
{
    return (y != 0) ? gcd(y, x % y) : x;
}

int main(){
    int option, a, b, value;

    cout << "Menu" << endl;
    cout << "1. Greatest Common Divisior" << endl;
    cout << "2. Modulo" << endl;
    cout << "Select Menu (Number): ";
    cin >> option;

    switch(option){
        case(1):{
        cout << "Input First Number: ";
        cin >> a;
        cout << "Input Second Number: ";
        cin >> b;

        value = gcd(a,b);
        cout << "GCD between " << a << " and " << b << " is: " << value;
        }
        break;

        case(2):{
        cout << "Input First Number: ";
        cin >> a;
        cout << "Input Second Number: ";
        cin >> b;

        value = a % b;
        cout << "Modulo between " << a << " and " << b << " is: " << value;
        }

        default:{
        cout << "Wrong Number!";
        break;
        }
    }
}