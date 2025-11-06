#include <iostream>
#include <random>

int main()
{
    // Random Number Generator 1...2
    std::random_device rd;  // Seed
    std::mt19937 gen(rd()); // Mersenne Twister engine
    std::uniform_int_distribution<> dist(1, 2);

    //Gives either 1 or 2 to Coin_Value as a value
    int Coin_Value = dist(gen);
    int Users_choice;

    unsigned int Win_Streak = 0;
    unsigned int Highest_Win_Steak = 0;

    do
    {
        std::cout << "Heads(1) or Tails(2)?" << '\n';
        do
        {
            // Users Input 1=Heads, 2=Tails
            std::cin >> Users_choice;
            if (Users_choice == 1 || Users_choice == 2)
            { // If valid input exit
                break;
            }
            // else continue to ask for users input until it is 1 or 2 (Heads or Tails)
            else
            {
                std::cout << "PUT IN A VALID ANSWER!" << '\n';
            }
        } while (true);

        // if guessed right -> add +1 to Win streak
        if (Users_choice == Coin_Value)
        {
            Win_Streak++;
            std::cout << "Lucky you! Your win streak is " << Win_Streak << '\n';
            // generate a new value for coin, 1 or 2 (Heads or Tails)
            Coin_Value = dist(gen);
        }
        // If guessed wrong -> You loose and Win streak resets to 0
        else
        {
            std::cout << "Unlucky, maybe next time" << '\n';

            std::cout << "Wanna try again? YES(3) or NO(0): ";
            std::cin >> Users_choice;

            // checks if the current users win streak is higher than his highest win streak
            if (Win_Streak > Highest_Win_Steak)
            {
                Highest_Win_Steak = Win_Streak;
            }
            // if invalid input -> exit
            if (Users_choice != 3)
            {
                break;
            }

            Win_Streak = 0;
        }
    } while (true);

    std::cout << "Your highest winstreak: " << Highest_Win_Steak;
    return 0;
}
