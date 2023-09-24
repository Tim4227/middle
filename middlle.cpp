#include <iostream>
#include "middle.h"
#include "middle.h"
#include "middle.h"
#include "middle.h"
#include "middle.h"
#include "middle.h"
using namespace std;

void itc_num_print(int n) {
    cout << n;
}

int itc_len_num(long long n) {
    if (n == 0)
        return 1;
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

int itc_rev_num(long long n) {
    int l = itc_len_num(n);
    while ((n % 10 == 0) && (n)) {
        l--;
        n /= 10;
    }
    return l;
}

int itc_null_count(long long n)
{
    int l = 0;
    while (n) {
        if (n % 10 == 0)
            l++;
        n /= 10;
    }
    return l;
}

int itc_pow(int a, int b) {
    double n = 1.0;
    if (b == 0)
        return 1;
    if (b > 0) {
        for (int i = 1; i <= b; i++) {
            n *= a;
        }
    }
    else {
        b = -b;
        for (int i = 1; i <= b; i++) {
            n /= a;
        }
    }
    return n;
}

bool itc_mirror_num(long long n)
{
    n = abs(n);
    if (n < 10)
        return true;
    int l = itc_len_num(n);
    int a, b;
    for (int i = 0; i < l / 2; i++) {
        a = (n / itc_pow(10, (l - i - 1))) % 10;
        b = (n / itc_pow(10, i)) % 10;
        if (a != b)
            return false;
    }
    return true;
}

int itc_mirror_count(long long n)
{
    int c = 0;
    if (n <= 0)
        c += 2;
    n = abs(n);
    if (n < 10)
        c += n;
    else
        c += 9;
    for (int i = 10; i <= n; i++) {
        if (itc_mirror_num(i))
            c++;
    }
    return c;
}

int itc_second_max_num(long long n)
{
    int m = -1, max = -1;
    while (n) {
        if (m == n % 10)
            max = m;
        if (m < n % 10) {
            max = -1;
            m = n % 10;
        }
        n /= 10;
    }
    return max;
}

int itc_second_simple_max_num(long long n)
{
    int m = -1, max = -1;
    int nc = n;
    while (nc) {
        if (m < nc % 10) {
            m = nc % 10;
        }
        nc /= 10;
    }
    while (n) {
        if ((n % 10 < m) && (max < n % 10)) {
            max = n % 10;
        }
        n /= 10;
    }
    return max;
}

long long itc_bin_num(long long n)
{
    int l = 0, b = 0;
    while (n) {
        b = ((n % 2) * pow(10, l)) + b;
        n /= 2;
        l++;
    }
    return b;
}

long long itc_oct_num(long long n)
{
    int l = 0, o = 0;
    while (n) {
        o = ((n % 8) * pow(10, l)) + o;
        n /= 8;
        l++;
    }
    return o;
}

int itc_rev_bin_num(long long n)
{
    int l = 0, d = 0;
    while (n) {
        d += (n % 2) * pow(2, l);
        n /= 10;
        l++;
    }
    return d;
}

int itc_rev_oct_num(long long n)
{
    int l = 0, d = 0;
    while (n) {
        d += ((n % 10) % 8) * pow(8, l);
        n /= 10;
        l++;
    }
    return d;
}
