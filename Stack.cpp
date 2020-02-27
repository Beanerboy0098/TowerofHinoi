#include "Stack.hpp"
#include <iostream>
#include <string>
using namespace std;

Stack::Stack()
{
    this->top = 0;
}

void Stack::push (string payload)
{
    Node* n = new Node(payload);
    if(top)
    {
        //we have an element already
        n->setNextNode(this->top);
        this->top = n;
    }
    else
    {
        this->top = n;
    }
    
}

string Stack::pop()
{
    string valueToReturn = this->top->getPayload();
    Node* temp = this->top;
    top = top->getNextNode();
    temp->setNextNode(0);
    delete temp;
    return valueToReturn;
}

string Stack::peek()
{
    return this->top->getPayload();
}

void Stack::display()
{
    if(this->top)
    {
        Node* currNode = this->top;
        while(currNode)
        {
            std::cout <<currNode->getPayload() << "\n";
            currNode = currNode->getNextNode();
        }
        std::cout <<"______\n";
    }
    else
    {
        std::cout <<"______\n";
    }
    
}