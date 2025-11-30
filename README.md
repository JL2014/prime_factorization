# prime_factorization

Compile
g++ -O2 prime_factorization.cpp -o prime_factorization `pkg-config --cflags --libs flint`

Usage
./prime_factorization <number>

Example
./prime_factorization 786630615595626829796137755567437844038832146564530660386728812791938555036352000000000
Factorisation: 2^9 * 3^9 * 5^3 * 7^4 * 13^6 * 17^3 * 19^3 * 31^1 * 37^1 * 43^1 * 61^3 * 73^1 * 79^3 * 97^3 * 109^3 * 139^3 * 157^1 * 397^3 * 503^3
