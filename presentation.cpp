#include <iostream>

int main() {
    int choice;
    std::cout << "Choose a loop: ";
    std::cin >> choice;

    if (choice == 1) {
    for (int i = 1; i <= 5; i++) {
    std::cout << "Number: " << i << std::endl;
    }
    } 
    else if (choice == 2) {
    int count = 5;
    while (count > 0) {
    std::cout << "Countdown: " << count << std::endl;
    count--;
    }
    } 
    else if (choice == 3) {
    int number;
    do {
    std::cout << "Enter a positive number: ";
    std::cin >> number;
    } while (number <= 0);
    std::cout << "You entered: " << number << std::endl;
    } 
    else if (choice == 4) {
    for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
    std::cout << i << " x " << j << " = " << i * j << std::endl;
    }
    }
    } 
    else if (choice == 5) {
    int numbers[] = {10, 20, 30, 40, 50};
    for (int num : numbers) {
    std::cout << "Value: " << num << std::endl;
    }
    } 
    else {
    std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
