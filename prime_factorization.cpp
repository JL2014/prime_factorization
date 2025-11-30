// Compile : g++ -O2 prime_factorization.cpp -o prime_factorization `pkg-config --cflags --libs flint`
#include <iostream>
#include <flint/fmpz.h>
#include <flint/fmpz_factor.h>

using namespace std;

int main(int argc, char** argv) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <number>" << endl;
        return 1;
    }

    fmpz_t N;
    fmpz_set_str(N, argv[1], 10);

    fmpz_factor_t factor;
    fmpz_factor_init(factor);
    fmpz_factor(factor, N);

    cerr << "Factorisation: ";
    for (size_t i = 0; i < factor->num; i++) {
        fmpz_print(factor->p + i);
        cout << "^" << factor->exp[i];
        if(i != factor->num-1) cout << " * ";
    }
    cout << endl;
    fmpz_factor_clear(factor);
    fmpz_clear(N);
    return 0;
}
