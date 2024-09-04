#include <iostream>

int main() {
    int num;
    int num1 = 0 << 1;
    std::cout << "Hello world\n";
    std::cin >> num;
    if (num == 0) {
        std::cout << "Cant devide by zero";
    } else {
        std::cout << num1/num;
    }
}
