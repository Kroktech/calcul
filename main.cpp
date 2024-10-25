#include <iostream>
#include<cmath>
struct frac
{

    int numerator;
    int denominator;
    frac(int numerator_, int denominator_) :
        numerator(numerator_)
        , denominator(denominator_)
    {}



};
std::ostream& operator <<(std::ostream& s, const frac& f)
{
    s << f.numerator << " /" << f.denominator;
    return s;
}
frac operator +(const frac& f, const frac& f2)
{
    frac tmp
    {
    f.numerator * f2.denominator + f2.numerator * f.denominator, f.denominator * f2.denominator

    };
    return tmp;



}
frac operator -(const frac& f, const frac& f2)
{
    frac tmp
    {
    f.numerator * f2.denominator - f2.numerator * f.denominator, f.denominator * f2.denominator

    };
    return tmp;
}
frac operator *(const frac& f, const frac& f2)
{
    frac tmp
    {
        f.numerator * f2.numerator,f.denominator * f2.denominator
    };
    return tmp;

}
frac operator /(const frac& f, const frac& f2)
{
    frac tmp
    {
        f.numerator * f2.denominator,f.denominator * f2.numerator
    };
    return tmp;

}
frac operator ^( frac& f, int puissance)
{
    for (int i = 1; i < puissance; ++i)
    {
        f.numerator = f.numerator * f.numerator;
    }
    for (int i = 1; i < puissance; ++i)
    {
        f.denominator = f.denominator * f.denominator;
    }
    frac tmp
    {
    f.numerator ,f.denominator
    };
    return tmp;
}

int main()
{
    frac f1(12, 4);
    frac f2(1, 3);
    std::cout << f1;
    std::cout << std::endl;
    std::cout << f1 + f2;
    std::cout << std::endl;
    std::cout << f1 - f2;
    std::cout << std::endl;
    std::cout << f1 * f2;
    std::cout << std::endl;
    std::cout << f1 / f2;
    std::cout << std::endl;
    std::cout << ((f1) ^ 2) << std::endl;
    return 0;
}
