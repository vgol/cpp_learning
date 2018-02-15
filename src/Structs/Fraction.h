#ifndef CPP_LEARNING_FRACTION_H
#define CPP_LEARNING_FRACTION_H

namespace frac
{
struct Fraction
{
    int numerator;
    int denominator;
};

double multiplyFractions(Fraction first, Fraction second);
Fraction requestFraction();
}

#endif //CPP_LEARNING_FRACTION_H
