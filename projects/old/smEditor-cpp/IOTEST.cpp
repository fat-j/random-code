#include <iostream>
#include <fstream>

int x;

void io()
{
    std::ofstream file("file.txt");
    while(x!=40)
    {
        ++x;
        std::cout << x << "\n";
        file << x;
    }
}

int main()
{
    io();
    std::cout << "You been hacked jijija";
    std::cin.get();
}