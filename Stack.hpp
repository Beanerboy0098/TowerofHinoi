#include "Node.hpp"

class Stack
{
    private:
        Node* top;

    public:
        Stack();
        void push(string payload);
        string pop();
        string peek();
        void display();
};