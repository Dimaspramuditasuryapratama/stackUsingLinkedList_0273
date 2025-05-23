#include <iostream>
using namespace std;

// Node class repreesnting a single node in the linked list
class Node 
{
    public:
        int data;
        Node* next;

        Node()
        {
            next = NULL;
        }
};

// stack class
class stack
{
    private:
        Node *top; //pointer to the top node of the stack
    
    public:
        stack()
        {
            top = NULL; //initialize the stack with a null top pointer
        }
        // push operation: insert an element onto the top of the stack
        int push(int value)
        {
            Node *newNode = new Node(); //Allocate memory for the  new node
            newNode->data = value; //assign value
            newNode->next = top; //set the next pointer of the new node to the current top
            top = newNode; //update the top pointer to point to the new node
            cout << "Pushed " << value << endl;
            return 0;
        }
};