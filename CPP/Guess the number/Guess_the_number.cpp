#include <iostream>
#include <cstdlib> //for rand() and srand() funtions
#include <ctime>   //for time() function

using namespace std;

int main()
{
    // generates a random number everytime you open the program;
    srand(time(0));

    // Variable for the range 0 - User
    int User;
    // The variable with which the Player guesses the secret number
    int Guess;

    do
    {
        cout << "Choose a range for you to guess the number." << endl;
        cout << "ex: 0-50, 0-10, 0-100. Minimum 2 and maximum 100" << endl;
        cout << "range: 0 - ";
        cin >> User;
    } while (User > 100 || User < 2);

    // Sets the random number with the user's range
    int randomNumber = rand() % (User + 1);

    cout << "Guess the number 0 - " << User << ": ";
    cin >> Guess;

    while (true)
    {
        if (Guess > randomNumber) // If higher
        {
            cout << "Lower!" << endl;
            cout << "Guess the number: ";
            cin >> Guess;
        }
        else if (Guess < randomNumber) // If lower
        {
            cout << "Higher!" << endl;
            cout << "Guess the number: ";
            cin >> Guess;
        }
        else
        { // If just right, then stop the game
            cout << "YOU GUESSED IT!";
            break;
        }
    }

    return 0;
}
