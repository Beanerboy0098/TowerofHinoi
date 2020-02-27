#include "Stack.hpp"
#include <string>
using namespace std;

class Towers
{
    private:
        Stack* first;
        Stack* second;
        Stack* third;

    public:
        void displayTowers();
        void move(Stack* firstSwap, Stack* secondSwap);
        Towers(Stack* first, Stack* second, Stack* third);
    
};