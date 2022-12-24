#include <iostream>

template<unsigned int n>
struct Factorial {
    static const int value = n * Factorial<n - 1>::value;
};

template<>
struct Factorial<0> {
    static const int value = 1;

};
template<>
struct Factorial<1> {
    static const size_t value = 1;
};
template<int a>
struct FactorialE;

int main() {
    FactorialE<Factorial<10>::value> FactorialE;
    return 0;
}
