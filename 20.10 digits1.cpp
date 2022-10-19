#include <iostream>
#include <string> 
using namespace std;


int main()
{
    setlocale(0, "");
    static int counter;
    int first_digit;
    cout << "Введите число: ";
    cin >> first_digit;
    int second_digit = first_digit;
    while (second_digit > 0)
    {
        if ((second_digit % 10) != 0 and first_digit % (second_digit % 10) == 0)
        {
            counter++;
            cout << first_digit << " делить на " << (second_digit % 10) << " = " << first_digit / (second_digit % 10) << endl;
            second_digit = second_digit / 10;
        }
        else
            second_digit = second_digit / 10;

    }
    if (counter > 0)
        cout << "Число делится как минимум на одну из своих цифр";
    else
        cout << "Число не делится ни на одну из своих цифр";


}
   
