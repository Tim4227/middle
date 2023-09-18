#include <iostream>
#include "middle.h"
using namespace std;

void itc_num_print(int n) {
    cout << n;
}

int itc_len_num(long long n) {
    int l = 0;
    while (n) {
        l++;
        n /= 10;
    }
    return l;
}

int itc_sum_num(long long n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int itc_multi_num(long long n) {
    int m = 1;
    while (n) {
        m *= n % 10;
        n /= 10;
    }
    return m;
}

int itc_max_num(long long n) {
    int m = -1;
    while (n) {
        m = m > n % 10 ? m : n % 10;
        n /= 10;
    }
    return m;
}

int itc_min_num(long long n) {
    int m = 10;
    while (n) {
        m = m < n % 10 ? m : n % 10;
        n /= 10;
    }
    return m;
}
