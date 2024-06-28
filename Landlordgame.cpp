#include <iostream>
#include <cmath>

int main() {
    int rent;

    std::cout << "Enter your current balance: ";
    std::cin >> rent;

    if (rent >= 1500) {
        std::cout << "Rent is due tomorrow." << std::endl;
    } else {
        std::cout << "Evicted." << std::endl;
    }

    return 0;
}
