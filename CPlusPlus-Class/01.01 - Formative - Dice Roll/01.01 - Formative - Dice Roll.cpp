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

// /////////////////////////////////
// DOUBLE OR NOTHING ( CASE A -> H )
// /////////////////////////////////

char intro(char a, int c, int d)
// CASE A
{
    char x = 'a';
    // setup user imput variable
    std::cout << "Welcome to Double or Nothing!" << std::endl << std::endl;
    std::cout << "You have " << c << "$." << std::endl
        << "The roll to beat is " << d << "." << std::endl
        << "do you want to roll the dice ? (y/n)" << std::endl << ">";
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

char rollTheDice(int& roll, int rollToBeat)
// CASE B
{
    int x = (rand() % 6) + 1;
    int y = (rand() % 6) + 1;
    roll = x + y;

    std::cout << "First dice : " << x << std::endl;
    std::cout << "Second dice : " << y << std::endl;
    std::cout << "Roll to beat [" << rollToBeat << "]" << std::endl;
    std::cout << "Your roll [" << roll << "]" << std::endl << std::endl;
    return 'c';
    return roll;
}

char doubleOrNothing(int roll, int& rollToBeat, int& money)
// CASE C
{
    if (roll >= rollToBeat)
    {
        money = money * 2;
        rollToBeat++;
        return 'd';
    }
    else {
        return 'e';
    }
}

char rollWin(int money, int rollToBeat)
// CASE D
{
    std::cout << "YOU WON !" << std::endl;
    std::cout << "The roll to beat got increased by 1. (" << rollToBeat << ")" << std::endl << std::endl;
    return 'f';
}

char rollLost(int rollToBeat)
// CASE E
{
    std::cout << "House wins !" << std::endl;
    if (rollToBeat > 7)
    {
        std::cout << "Maybe you shouldn't have been so greedy." << std::endl;
    }
    std::cout << "Better luck next time !" << std::endl;

    return NULL;
}

char playAgain(int money)
// CASE F
{
    char x = 'a';
    std::cout << "You now have " << money << "$. Do you want to play it double or nothing ? (y/n)" << std::endl << ">";
    std::cin >> x;
    std::cout << std::endl;
    if (x == 'y')
    {
        return 'b';
    }
    else if (x == 'n')
    {
        return 'd';
    }
    return NULL;
}
// /////////////////////////
// DEATHROLL ( CASE I -> _ )
// /////////////////////////

char deathrollStart(std::string& player1, std::string& player2, int bank, int& bet)
// CASE I
{
    std::cout << "Who is player 1 ?" << std::endl << ">";
    std::cin >> player1;
    std::cout << "Who is player 2 ?" << std::endl << ">";
    std::cin >> player2;
    std::cout << std::endl << "Welcome " << player1 << " and " << player2 << "." << std::endl;
    std::cout << "How much do you want to bet " << player1 << " ? You have $" << bank << ".";
    bool betSetOkay = false;
    do {
        std::cout << std::endl << ">";
        std::cin >> bet;
        if (bet > bank)
        {
            std::cout << "You don't have this money";
            continue;
        }
        else if (bet = 0)
        {
            std::cout << "You can't bet nothing.";
            continue;
        }
        else if (bet > 0 && bet <= bank)
        {
            break;
        }
        else if (bet = ~(int)bet)
        {
            std::cout << "error";
            bet = NULL;
        }
        else
        {
            continue;
        }
    } while (betSetOkay == false);
    std::cout << "The bet is $" << bet << ". Let's start deathrolling !" << std::endl;
    return NULL;
}

char deathroll(std::string player1, std::string player2)
{
    // CASE J
    int x = (rand() % 2);
    int deathroll = 100;
    int roll = 0;
    if (x == 0)
    {
        std::cout << "It's your turn to roll, " << player1 << ". (Type 'roll')" << std::endl << ">";
    }
    else
    {
        std::cout << "It's your turn to roll, " << player2 << ". (Type 'roll')" << std::endl << ">";
    }
    while (deathroll != 0)
    {
        std::string y = "";
        std::cin >> y;
        if (y == "roll")
        {
            roll = (rand() % deathroll + 1);
            if (roll == 1)
            {
                // TODO
                std::cout << "0";
            }
        }
    }
    return NULL;
}

// //////////////////////////////
// START AND MENU ( CASE _ -> Z )
// //////////////////////////////
char startup()
// CASE Z
{
    std::cout << "Welcome to the black lotus casino." << std::endl;
    std::cout << "What game do you want to play ?" << std::endl << std::endl;
    std::cout << "1 : Double or nothing." << std::endl;
    std::cout << "2 : Deathroll (2 players)." << std::endl;
    std::cout << "3 : " << std::endl;

    return NULL;
}

int main()
{
    //int a = 0;
    //switch (a)
    /*-------switch------------*/

    /*-------------------------*/
    srand((unsigned)time(0));
    // GLOBAL
    int money = 5;
    char id = 'i';
    int loopOut = 0;

    // DOUBLE OR NOTHING
    int rollToBeat = 5;
    int roll = 0;

    // DEATHROLL
    std::string deathrollPlayerName1 = "";
    std::string deathrollPlayerName2 = "";
    int bet = 0;

    while (loopOut == 0)
    {
        switch (id)
        {
            /*---------Double or Nothing-------------*/
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
            id = rollWin(money, rollToBeat);
            break;
        case 'e':
            id = rollLost(rollToBeat);
            break;
        case 'f':
            id = playAgain(money);
            break;
            /*-------------Deathroll--------------*/
        case 'i':
            id = deathrollStart(deathrollPlayerName1, deathrollPlayerName2, money, bet);
            break;
            /*---------menu and stuff-------------*/
        case 'z':
            id = startup();
        }
    }

    return EXIT_SUCCESS;
}