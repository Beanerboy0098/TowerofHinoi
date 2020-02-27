#include "Towers.hpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Stack* towerOne = new Stack();
    Stack* towerTwo = new Stack();
    Stack* towerThree = new Stack();   

    towerOne->push("===");
    towerOne->push("==");
    towerOne->push("=");
    //Representing each circle size as equal signs

    Towers* collection = new Towers(towerOne, towerTwo, towerThree);
    collection->displayTowers();
    
    collection->move(towerOne, towerTwo);
    collection->displayTowers();
    
    collection->move(towerOne, towerTwo);
    collection->displayTowers();

    collection->move(towerTwo, towerThree);
    collection->displayTowers();

    collection->move(towerTwo, towerThree);
    collection->displayTowers();
    //These methods represent moves since we don't have to worry about rules the process is straightfoward.
    return 0;
}