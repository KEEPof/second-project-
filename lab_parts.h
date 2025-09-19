//
// Created by user on 19.09.2025.
//

#ifndef LAB_PARTS_H
#define LAB_PARTS_H
#include <iostream>
#include <ostream>

inline void task1() {
    double a;
    std::println(std::cout, "How much cm?: ");
    std::cin >> a;
    std::println(std::cout);
    std::println(std::cout, "Meters: {}", static_cast<int>(a) / 100);
}

inline void task2() {

}

#endif //LAB_PARTS_H
