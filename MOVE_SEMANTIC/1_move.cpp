#include <iostream>

void passByMove(int&& x)
{
    std::cout << "passByMove: " << x << std::endl;
}

int main() 
{
    int x = 3;
    // passByMove(x); // it will not compile because x is lvalue
    passByMove(3); // it will compile because 3 is rvalue
}