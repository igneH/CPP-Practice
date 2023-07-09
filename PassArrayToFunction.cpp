#include <iostream>

double getTotal(double[], int);

int main(){
    double prices[] = {4.99, 19.99, 420.69};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << total << "€" << std::endl;

    return 0;
}

double getTotal(double prices[], int size){ //when a function receives an array, it decayes into a pointer (so it doesn't know the size of the array anymore)
    double total = 0;
    for(int i = 0; i < size; i++){
        total+=prices[i];
    }
    return total;
}