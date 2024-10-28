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
frac operator ^(frac& f,unsigned int puissance)
{
    int resultn = 1;
    int resultd = 1;
    for (int i = 0; i < puissance; ++i)
    {
        resultn *= f.numerator;
        resultd *= f.denominator;
    }
   
    frac tmp
    {
        resultn , resultd
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
    std::cout << ((f1) ^ 3) << std::endl;
    return 0;
}
