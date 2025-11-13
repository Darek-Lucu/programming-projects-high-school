#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

long double Addition(long double x, long double y);
long double Multiplication(long double x, long double y);
long double Subtraction(long double x, long double y);
long double Divizion(long double x, long double y);

int main()
{
    //User Inputs
    long double User_Input;
    long double User_Input2;

    //for Operators 
    char Choice;
    //used as a way to keep the last number obtained to keep doing calculations
    long double h_choice;

    cout << "Enter a number: ";
    cin >> User_Input;

    //Calculations
    do
    {
        cout << endl << "Operations: " << endl;
        cout << "+ " << "- " << "/ " << "*" << endl;
        cout << "Exit (0)" << endl;
        cin >> Choice;
        
        //Addition
        if (Choice == '+')
        {
            cout << User_Input << " + ";
            cin >> User_Input2;
            cout<<"= ";
            h_choice = Addition(User_Input, User_Input2);
            cout << h_choice;
            cout << endl;
        }

        //Subtraction
        if (Choice == '-')
        {
            cout << User_Input << " - ";
            cin >> User_Input2;
            cout<<"= ";
            h_choice = Subtraction(User_Input, User_Input2);
            cout << h_choice;
            cout << endl;
        }

        //Multiplication
        if (Choice == '*')
        {
            cout << User_Input << " * ";
            cin >> User_Input2;
            cout<<"= ";
            h_choice = Multiplication(User_Input, User_Input2);
            cout << h_choice;
            cout << endl;
        }

        //Divizion
        if (Choice == '/')
        {
            cout << User_Input << " / ";
            cin >> User_Input2;
            cout<<"= ";
            h_choice = Divizion(User_Input, User_Input2);
            printf("%.4Lf\n", h_choice);
            cout << endl;
        }
        
        //To exit the calculator type in 0
        if (Choice == '0')
            break;

        User_Input = h_choice;

    } while (true);
}

//----------------------------------------------Funtions------------------------------------------------------------------


//Additon function
long double Addition(long double x, long double y)
{
    return x + y;
}

//Multiplication function
long double Multiplication(long double x, long double y)
{
    return x * y;
}

//Subtraction function
long double Subtraction(long double x, long double y)
{
    return x - y;
}

//Divizion function
long double Divizion(long double x, long double y)
{
    return x / y;
}
