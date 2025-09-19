#include <iostream>

#include "lab_parts.h"


int main() {
    while (true) {
        int numberOfTask;
        std::println(std::cout, "Vvedite nomer zadachi: ");
        std::cin >> numberOfTask;

        if (numberOfTask == 0) {
            return 0;
        }
        if (numberOfTask == 1) {
            task1();
        } else if (numberOfTask == 2) {
            task2();
        }
    }
}
