#include <iostream>
#include <vector>

int multiply(int num1, int num2);

int main() {
    std::cout << multiply(2,3);
    return 0;
}



int multiply(int num1, int num2) {
    return num1*num2;
}