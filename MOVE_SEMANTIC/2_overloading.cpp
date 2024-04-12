#include <iostream>

void printTheNumber(int&& x)
{
    std::cout << "pass by Rvalue: " << x << std::endl;
}

void printTheNumber(int& x)
{
    std::cout << "pass by Lvalue: " << x << std::endl;
}

int main() 
{
    int x = 3;
    // passByMove(x); // it will not compile because x is lvalue
    printTheNumber(3); // it will compile because 3 is rvalue
    printTheNumber(x); // it will compile because x is lvalue
    printTheNumber(std::move(x)); // it will compile because std::move(x) is rvalue
}