//
// Created by Lenovo on 26-08-2025.
//

#ifndef RADIX_HPP
#define RADIX_HPP

#endif //RADIX_HPP

// radix.hpp
#pragma once
#include <bits/stdc++.h>
using namespace std;

//
// --------------------- Radix Sort for 32-bit signed ints ---------------------
//

inline void radix_sort_int32(vector<int>& a) {
    size_t n = a.size();
    if (n <= 1) return;

    vector<uint32_t> u(n);
    for (size_t i = 0; i < n; ++i)
        u[i] = static_cast<uint32_t>(a[i]) ^ 0x80000000u;

    vector<uint32_t> aux(n);

    for (int shift = 0; shift < 32; shift += 8) {
        array<size_t, 256> cnt{};
        for (uint32_t x : u) cnt[(x >> shift) & 0xFF]++;

        size_t sum = 0;
        for (int b = 0; b < 256; ++b) {
            size_t c = cnt[b];
            cnt[b] = sum;
            sum += c;
        }

        for (uint32_t x : u) {
            uint32_t byte = (x >> shift) & 0xFF;
            aux[cnt[byte]++] = x;
        }

        u.swap(aux);
    }

    for (size_t i = 0; i < n; ++i)
        a[i] = static_cast<int>(u[i] ^ 0x80000000u);
}

//
// --------------------- Radix Sort for 64-bit signed ints ---------------------
//

inline void radix_sort_int64(vector<long long>& a) {
    size_t n = a.size();
    if (n <= 1) return;

    vector<uint64_t> u(n);
    for (size_t i = 0; i < n; ++i)
        u[i] = static_cast<uint64_t>(a[i]) ^ 0x8000000000000000ull;

    vector<uint64_t> aux(n);

    for (int shift = 0; shift < 64; shift += 8) {
        array<size_t, 256> cnt{};
        for (uint64_t x : u) cnt[(x >> shift) & 0xFF]++;

        size_t sum = 0;
        for (int b = 0; b < 256; ++b) {
            size_t c = cnt[b];
            cnt[b] = sum;
            sum += c;
        }

        for (uint64_t x : u) {
            uint64_t byte = (x >> shift) & 0xFF;
            aux[cnt[byte]++] = x;
        }

        u.swap(aux);
    }

    for (size_t i = 0; i < n; ++i)
        a[i] = static_cast<long long>(u[i] ^ 0x8000000000000000ull);
}

//
// --------------------- MSD Radix Sort for strings ---------------------
//

static inline int charAt(const string& s, size_t d) {
    return (d < s.size()) ? (unsigned char)s[d] : -1;
}

inline void msd_sort_range(vector<string>& a, vector<string>& aux, size_t lo, size_t hi, size_t d) {
    if (hi <= lo) return;

    const int R = 256;
    vector<size_t> count(R + 2, 0);

    for (size_t i = lo; i <= hi; ++i) {
        int c = charAt(a[i], d) + 1;
        count[c + 1]++;
    }

    for (int r = 0; r <= R; ++r) count[r + 1] += count[r];

    for (size_t i = lo; i <= hi; ++i) {
        int c = charAt(a[i], d) + 1;
        aux[count[c]++] = a[i];
    }

    for (size_t i = lo; i <= hi; ++i)
        a[i] = move(aux[i - lo]);

    vector<size_t> start(R + 1);
    start[0] = 0;
    for (int r = 0; r <= R; ++r) start[r + 1] = count[r];

    for (int r = 1; r <= R; ++r) {
        size_t s = lo + start[r];
        size_t e = lo + start[r + 1] - 1;
        if (e >= s) msd_sort_range(a, aux, s, e, d + 1);
    }
}

inline void radix_sort_strings(vector<string>& a) {
    if (a.size() <= 1) return;
    vector<string> aux(a.size());
    msd_sort_range(a, aux, 0, a.size() - 1, 0);
}

