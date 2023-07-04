#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char);
void chooseWinner(char, char);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice was: ";
    showChoice(player);
    computer = getComputerChoice();
    std::cout << "Computer's choice was: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    char player;
    std::cout << "****************\n" << "Rock-Paper-Scissors Game!\n" << "****************\n" << 
    "'r' for Rock\n'p' for Paper\n's' for Scissors\n";
    do{
        std::cout << "Your choice: ";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    
    return player;
}
char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}
void showChoice(char choice){
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;
    default:
    std::cout << "Invalid Choice!\n";
    }
}
void chooseWinner(char player, char computer){
    switch (player)
    {
    case 'r':
       if (computer == 'r')
       {
        std::cout << "Its a tie!\n";
       }else if (computer == 'p')
       {
        std::cout << "You lose!\n";
       }else{
        std::cout << "You win!\n";
       }
        break;
    case 's':
       if (computer == 's')
       {
        std::cout << "Its a tie!\n";
       }else if (computer == 'r')
       {
        std::cout << "You lose!\n";
       }else{
        std::cout << "You win!\n";
       }
        break;
    case 'p':
       if (computer == 'p')
       {
        std::cout << "Its a tie!\n";
       }else if (computer == 's')
       {
        std::cout << "You lose!\n";
       }else{
        std::cout << "You win!\n";
       }  
        break;
    
    default:
        break;
    }
}