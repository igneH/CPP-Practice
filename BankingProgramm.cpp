#include <iostream>
#include <iomanip> //contains a function to set precision to floating-point numbers

void showBalance(double);
double deposite();
double withdraw(double);

int main(){
    double balance = 420.69;
    int choice = 0;
    do{
        std::cout << "**************\n" << "Enter your choice: \n" << "**************\n" << 
        "1. Show Balance\n" << "2. Deposite Money\n" << "3. Withdraw Money\n" << "4. Exit\n";
        std::cin >> choice;
        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposite();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting!\n";
            break;
        default:
            std::cout << "Invalid choise!\n";
        }
    }while(choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: " << std::setprecision(2) << std::fixed << balance << "€" << std::endl;
}

double deposite(){
    double amount = 0;

    std::cout << "Enter a amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }else{
        std::cout << "That's not a valid amount: \n";
        return 0;
    }

    
}

double withdraw(double balance){
    double amount = 0;

    std::cout << "Enter a amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "insufficient funds\n";
        return 0;
    }else if (amount < 0)
    {
        std::cout << "That's not a valid amount\n";
        return 0;
    }else{
        return amount;
    }
}