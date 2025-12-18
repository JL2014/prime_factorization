# prime-factorization

## Compile
g++ -O2 prime_factorization.cpp -o prime_factorization \`pkg-config --cflags --libs flint\`

## Usage
./prime_factorization <number>

## Examples
./prime_factorization 786630615595626829796137755567437844038832146564530660386728812791938555036352000 \
Factorisation: 2^9 * 3^9 * 5^3 * 7^4 * 13^6 * 17^3 * 19^3 * 31 * 37 * 43 * 61^3 * 73 * 79^3 * 97^3 * 109^3 * 139^3 * 157 * 397^3 * 503^3

./prime_factorization 786630615595626829796137755567437844038832146564530660386728812791938555036352000 2>/dev/null \
2^9 * 3^9 * 5^3 * 7^4 * 13^6 * 17^3 * 19^3 * 31 * 37 * 43 * 61^3 * 73 * 79^3 * 97^3 * 109^3 * 139^3 * 157 * 397^3 * 503^3
