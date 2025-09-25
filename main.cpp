#include <iostream>

#include "lab_parts.h"


int main() {
    while (true) {
        int numberOfTask;
        std::println(std::cout, "Vvedite nomer zadachi: ");
        std::println(std::cout, "nomer mojet byt' ot 1 do 9 ili ot 12 do 17 : ");
        std::cin >> numberOfTask;

        if (numberOfTask == 0) {
            return 0;
        }
        if (numberOfTask == 1) {
            task1();
        } else if (numberOfTask == 2) {
            task2();
        } else if (numberOfTask == 3) {
            task3();
        } else if (numberOfTask == 4) {
            task4();
        } else if (numberOfTask == 5) {
            task5();
        } else if (numberOfTask == 6) {
            task6();
        } else if (numberOfTask == 7) {
            task7();
        } else if (numberOfTask == 8) {
            task8();
        } else if (numberOfTask == 9) {
            task9();
        } else if (numberOfTask == 12) {
            task12();
        } else if (numberOfTask == 13) {
            task13();
        } else if (numberOfTask == 14) {
            task14();
        } else if (numberOfTask == 15) {
            task15();
        } else if (numberOfTask == 16) {
            task16();
        } else if (numberOfTask == 17) {
            task17();
        }

    }
}
