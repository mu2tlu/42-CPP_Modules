#include "whatever.hpp"
#include <iostream>

int main( void ) {

    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


    float x = 2.5;
    float z = 3.5;

    ::swap( x, z );
    std::cout << "x = " << x << ", z = " << z << std::endl;
    std::cout << "min( x, z ) = " << ::min( x, z ) << std::endl;
    std::cout << "max( x, z ) = " << ::max( x, z ) << std::endl;

}
