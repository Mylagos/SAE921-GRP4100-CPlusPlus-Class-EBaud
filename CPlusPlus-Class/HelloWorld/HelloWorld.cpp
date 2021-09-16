#include <iostream>
#include <random>
#include <ctime>

/*int intro() 
{
    std::cout
        << "  _____              _     _                                 _   _     _             " << std::endl
        << " |  __ \            | |   | |                               | | | |   (_)            " << std::endl
        << " | |  | | ___  _   _| |__ | | ___    ___  _ __   _ __   ___ | |_| |__  _ _ __   __ _ " << std::endl
        << " | |  | |/ _ \| | | | '_ \| |/ _ \  / _ \| '__| | '_ \ / _ \| __| '_ \| | '_ \ / _` |" << std::endl
        << " | |__| | (_) | |_| | |_) | |  __/ | (_) | |    | | | | (_) | |_| | | | | | | | (_| |" << std::endl
        << " |_____/ \___/ \__,_|_.__/|_|\___|  \___/|_|    |_| |_|\___/ \__|_| |_|_|_| |_|\__, |" << std::endl
        << "                                                                                __/ |" << std::endl
        << "                                                                               |___/ " << std::endl
        << std::endl;
    return NULL;
}*/


int intro(char a, int c, int d)
// CASE A
{
    char x = 'a';
    // setup user imput variable
    std::cout << "Welcome to Double or Nothing!" << std::endl << std::endl;
    std::cout << "You have " << c << "$." << std::endl
                << "The roll to beat is " << d << "." << std::endl 
                << "do you want to roll the dice ? (y/n)" << std::endl;
    std::cin >> x;
    std::cout << std::endl;

    if (x == 'n')
    {
        std::cout << "Alright, farwell..." << std::endl;
    }
    // !!! PROGRAM SOFTLOCK MAYBE DO SOMETHING ELSE? Works as intendeed though
    else 
    {
        return 'b';
    // switch to case b
    };
}

int rollTheDice(int &roll, int rollToBeat) 
// CASE B
{
    int x = (rand()% 6) + 1;
    int y = (rand()% 6) + 1;
    roll = x + y;

    std::cout << "First dice : " << x << std::endl;
    std::cout << "Second dice : " << y << std::endl << std::endl;
    std::cout << "Roll to beat [" << rollToBeat << "]" << std::endl;
    std::cout << "Your roll [" << roll << "]" << std::endl << std::endl;
    return 'c';
    return roll;
}

int doubleOrNothing(int roll, int rollToBeat, int &money)
// CASE C
{
    if (roll >= rollToBeat)
    {
        money = money * 2;
        return 'd';
    }
    else {
        return 'e';
    }
}

int rollWin(int money)
// CASE D
{
    std::cout << "YOU WON !" << std::endl;
    std::cout << "The roll to beat got increased by 1." << std::endl;
    std::cout << "You now have " << money << "$." << std::endl << std::endl;
    return 'f';
}

int rollLost()
// CASE E
{
    return NULL;
}

int playAgain(int money)
// CASE F
{
    std::cout << "You have " << money << "$. Do you want to play it double or nothing ?" << std::endl;
    return NULL;
}

int main()
{
    //int a = 0;
    //switch (a)
    /*-------switch------------*/

    /*-------------------------*/
    srand((unsigned)time(0));
    int money = 5;
    int rollToBeat = 7;
    int roll = 0;

    int loopOut = 0;
    char id = 'a';

    while (loopOut == 0)
    {
        switch (id)
        {
        case 'a':
            id = intro(id, money, rollToBeat);
            break;
        case 'b':
            id = rollTheDice(roll, rollToBeat);
            break;
        case 'c':
            id = doubleOrNothing(roll, rollToBeat, money);
            break;
        case 'd':
            id = rollWin(money);
            break;
        case 'e':
            break;
        case 'f':
            id = playAgain(money);
            break;
        }
    }
    
    return EXIT_SUCCESS;
}
