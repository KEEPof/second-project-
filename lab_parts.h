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
    std::println(std::cout, "Metrov: {}", static_cast<int>(a) / 100);
}

inline void task2() {
    int a;
    std::println(std::cout, "How much kg?: ");
    std::cin >> a;
    std::println(std::cout, "Centnerov: {}", a / 100);
}

inline void task3() {
    int a = 234;
    std::println(std::cout, "Nedel' v 234 days: {}", a / 7);
}

inline void task4() {
    int n;
    std::println(std::cout, "skol'ko shkol'nuikov?: ");
    std::cin >> n;
    int k;
    std::println(std::cout, "skol'ko yablok?: ");
    std::cin >> k;
    std::println(std::cout, "dostanetsa: {}, ostanetsa: {}", k / n, k - ((k / n) * n));
}


inline void task5() {
    std::println(std::cout, "kvadratov po 130 in 543: {}", 543 / 130);
}

inline void task6() {
    int a;
    std::println(std::cout, "number mesta?: ");
    std::cin >> a;
    a > 36 || a < 1
        ? std::println(std::cout, "nomer ne mojet be bolshe 36 ili menshe 1!")
        : std::println(std::cout, "kupe number: {}", 1 + (a / 4));
}

inline void task7() {
    int a;
    std::println(std::cout, "number kv?: ");
    std::cin >> a;
    a > 15 || a < 1
        ? std::println(std::cout, "nomer ne mojet be bolshe 15 ili menshe 1!")
        : std::println(std::cout, "etaj number: {}", 1 + (a / 3));
}

inline void task8() {
    int a;
    std::println(std::cout, "sekund?: ");
    std::cin >> a;
    int b = a / 3600;
    int c = (a - (b * 3600)) / 60;
    int d = (a - (b * 3600)) - c * 60;
    std::println(std::cout, "chasov s nachala sutok: {}", b);
    std::println(std::cout, "minut s nachala chasa: {}", c);
    std::println(std::cout, "secund s nachala minuti: {}", d);
}

inline void task9() {
    std::string week[] = {
        "ponedelnik",
        "vtornik",
        "sreda",
        "chetverg",
        "pyatnitsa",
        "subbota",
        "voskresenye"
    };
    int k = 0;
    int d = 0;
    std::println(std::cout, "k=?: ");
    std::cin >> k;
    if (k > 365 || k < 1) {
        std::println(std::cout, "k ne mojet be bolshe 365 ili menshe 1!");
        return;
    }
    std::println(std::cout, "d=?: ");
    std::println(std::cout, "(esli d==1 -> ponedelnik, d==2 -> vtornik, ..., d==7 -> voskresenye)");
    std::cin >> d;

    if (d < 1 || d > 7) {
        std::println(std::cout, "d ne mojet be bolshe 7 ili menshe 1!");
        return;
    }

    int n1 = (k + 1 - 2) % 7;
    int n2 = (k + 2 - 2) % 7;
    int n3 = (k + d - 2) % 7;

    std::println(std::cout, "a) day of week dnya nomer {} is {}", k, week[n1]);
    std::println(std::cout, "b) day of week dnya nomer {} is {}", k, week[n2]);
    std::println(std::cout, "c) day of week dnya nomer {} is {}", k, week[n3]);

}


inline void task12() {
    int a;
    std::println(std::cout, "number kv?: ");
    std::cin >> a;
    a > 20 || a < 1
        ? std::println(std::cout, "nomer ne mojet be bolshe 20 ili menshe 1!")
        : std::println(std::cout, " etaj number: {} \n nomer kvartiti sredi kvartir na etaje: {} ", (a - 1) / 4 + 1, (a - 1) % 4 + 1);

}

inline void task13() {
    int stroki = 10;
    int stolbtsi = 5;

    int n;
    std::println(std::cout, "number elementa?: ");
    std::cin >> n;
    n > 50 || n < 1
        ? std::println(std::cout, "nomer ne mojet be bolshe 50 ili menshe 1!")
        : std::println(std::cout, "stroka: {}, stolbets: {}", (n - 1) / stolbtsi + 1, (n - 1) % stolbtsi + 1);
}

inline void task14() {
    int a;
    std::println(std::cout, "number kv?: ");
    std::cin >> a;
    a > 216 || a < 1
        ? std::println(std::cout, "nomer ne mojet be bolshe 20 ili menshe 1!")
        : std::println(std::cout, "pod'ezd number: {} \n etaj etogo pod'ezda: {} \n nomer kvartiti sredi kvartir na etaje: {} "
            , (a - 1) / 54 + 1, ((a - 1) % 54) / 6 + 1,((a - 1) % 54) % 6 + 1);
}

inline void task15() {
    int a;
    std::println(std::cout, "number tovara?: ");
    std::cin >> a;
    a > 1200 || a < 1
        ? std::println(std::cout, "nomer ne mojet be bolshe 1200 ili menshe 100!")
        : std::println(std::cout, "yarus number: {} \n sekcia number: {} \n nomer tovara v sekcii: {} "
            , (a - 1) / 120 + 1, (( (a - 1) / 15 ) % 8 ) + 1 ,(a - 1) % 15 + 1);
}

inline void task16() {
    int a;
    std::println(std::cout, "trehznachnoe chislo?: ");
    std::cin >> a;
    a > 999 || a < 100
    ? std::println(std::cout, "nomer ne mojet be bolshe 999 ili menshe 1!")
    : std::println(std::cout, "edinic: {} \n desyatkov: {} \n summa cifor: {} "
        , a % 100 % 10, a % 100 / 10,(a % 100 % 10) + (a % 100 / 10) + (a / 100));
}

inline void task17() {
    int num;
    std::println(std::cout, "chetirehznachnoe chislo?: ");
    std::cin >> num;
    int a = num / 1000;
    int b = (num / 100) % 10;
    int c = (num / 10) % 10;
    int d = num % 10;
    // а)
    int naoborot = d * 1000 + c * 100 + b * 10 + a;

    // б)
    int perestanovka1 = b * 1000 + a * 100 + d * 10 + c;

    // в)
    int perestanovka2 = a * 1000 + c * 100 + b * 10 + d;

    // г1)
    int perestanovka3 = c * 1000 + d * 100 + a * 10 + b;

    // г2)
    int p1 = num / 100;
    int p2 = num % 100;
    int result = p2 * 100 + p1;

    num > 9999 || num < 1000
    ? std::println(std::cout, "nomer ne mojet be bolshe 9999 ili menshe 1!")
    : std::println(std::cout, "a) {} \n b) {} \n v) {} \n g1) {} \n g2) {} "
        , naoborot, perestanovka1, perestanovka2, perestanovka3, result);
}


#endif //LAB_PARTS_H
