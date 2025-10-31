#include <iostream>
#include <string.h>
#include <random>

int main(){
    //RANDOM NUMBER GENERATOR 1...3
    std::random_device rd;  // Seed
    std::mt19937 gen(rd()); // Mersenne Twister engine
    std::uniform_int_distribution<> dist(1, 3);

    int Players_choice;
    int Computers_choice=dist(gen);
    std::string CPU;
    std::string PLAYER;

    
    std::cout<<"Choose your play: ";
    std::cout<<std::endl<<"Rock=1";
    std::cout<<std::endl<<"Paper=2";
    std::cout<<std::endl<<"Scissors=3";
    std::cout<<std::endl<<"Choose: ";
    std::cin>>Players_choice;
    std::cout<<std::endl;

    //TRANSFORMING FROM NUMBER TO TEXT, CPU
    if (Computers_choice==1) CPU="ROCK";
    else if (Computers_choice==2) CPU="PAPER";
    else CPU="SCISSORS";

    //TRANSFORMING FROM NUMBER TO TEXT, PLAYER
    if (Players_choice==1) PLAYER="ROCK";
    else if (Players_choice==2) PLAYER="PAPER";
    else PLAYER="SCISSORS";
    

    if (Players_choice==Computers_choice)
    {
        std::cout<<"CPU: "<<CPU;
        std::cout<<std::endl<<"You: "<<PLAYER;
        std::cout<<std::endl<<"ITS A TIE!";
    }
    else if ((Players_choice==1 && Computers_choice==2) || (Players_choice==2 && Computers_choice==3) || (Players_choice==3 && Computers_choice==1))
    {
        std::cout<<"CPU: "<<CPU;
        std::cout<<std::endl<<"You: "<<PLAYER;
        std::cout<<std::endl<<"CPU WINS!";
    }
    else{
        std::cout<<"CPU: "<<CPU;
        std::cout<<std::endl<<"You: "<<PLAYER;
        std::cout<<std::endl<<"YOU HAVE WON!";
    }
    return 0;
}