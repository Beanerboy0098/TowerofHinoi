#include "Towers.hpp"
#include <string>
#include <iostream>
using namespace std;

Towers::Towers(Stack* first, Stack* second, Stack* third)
{
    this->first = first;
    this->second = second;
    this->third = third;
}

void Towers::move(Stack* firstSwap, Stack* secondSwap)
{
    string move = firstSwap->pop();
    secondSwap->push(move);
}
// All moves happen here 
void Towers::displayTowers()
{
    std::cout << "Tower One: \n";
    first->display();
    std::cout << "Tower Two: \n";
    second->display();
    std::cout << "Tower Three: \n";
    third->display();
    std::cout << "\n";
    std::cout << " \n";
}
//Displaying our towers