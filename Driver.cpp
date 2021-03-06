#include "Stack.hpp"
#include <iostream>

using namespace std;

int main()
{
    Stack* firstTower = new Stack();
    Stack* secondTower = new Stack();
    Stack* thirdTower = new Stack();
    firstTower->push(3);
    firstTower->push(2);
    firstTower->push(1);

    int from;
    int to;
    while(thirdTower->isWin() == false)
    {
        std::cout <<"\nFirst Tower: \n";
        firstTower->displayTextual();
        std::cout <<"Second Tower: \n";
        secondTower->displayTextual();
        std::cout <<"Third Tower: \n";
        thirdTower->displayTextual();

        std::cout<<"\nRemove from? ";
        std::cin>>from;
        std::cout<<"\nAdd to? ";
        std::cin>>to;

        if(from == 1)
        {
            if(to == 2)
            {
                firstTower->moveTo(secondTower);
            }
            else if (to == 3)
            {
                firstTower->moveTo(thirdTower);
            }
        }
        else if(from == 2)
        {
            if(to == 1)
            {
                secondTower->moveTo(firstTower);
            }
            else if(to == 3)
            {
                secondTower->moveTo(thirdTower);
            }
        }
        else
        {
            if(to == 1)
            {
                thirdTower->moveTo(firstTower);
            }
            else if(to == 2)
            {
                thirdTower->moveTo(secondTower);
            }
        }
        

    }
    

    return 0;
}
