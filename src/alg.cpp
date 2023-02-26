// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double val = value;
    if (n == 0) {
        return 1;
    }
    else {
        for (int i = 0; i < n - 1; i++) {
            val *= value;
        }
        return val;
    }
}

uint64_t fact(uint16_t n) {
    uint64_t sr = 1;
    if (n == 0) {
        return 1;
    }
    else {
        for (int i = 1; i <= n; i++) {
            sr *= i;
        }
    }
    return sr;
}

double calcItem(double x, uint16_t n) {
    double otv;
    otv = pown(x, n) / fact(n);
    return otv;
}

double expn(double x, uint16_t count) {
    double otv = 1;
    for (int i = 1; i <= count; i++) {
        otv += calcItem(x, i);
    }
    return otv;
}

double sinn(double x, uint16_t count) {
    double otv=x;
    for (int i = 2; i <= count; i++) {
        otv += (pown(-1, i - 1) * (pown(x, 2 * i - 1) / (fact(2 * i - 1))));
    }
    return otv;
}

double cosn(double x, uint16_t count) {
    double otv = 1;
    for (int i = 2; i <= count; i++) {
        otv += (pown(-1, i - 1) * (pown(x, 2 * i - 2) / (fact(2 * i - 2))));
    }
    return otv;
}
