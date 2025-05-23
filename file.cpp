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

        // pop operation: remove the topmost element from the stack
        void pop()
        {
            if (isEmpty())
            {
                cout << "Stack is empty." << endl;
            }

            Node *temp = top; //create a temporary pointer to the top node
            top = top->next; //update the top pointer to the next node
            cout << "Popped value: " << top->data << endl;
            delete temp;
        }

        // peek/top operation: retrieve the value of the topmost element without removing it
        void peek()
        {
            if (top == NULL)
            {
                cout << "List is empty." << endl;
            }
            else
            {
                Node *current = top;
                while (current != NULL)
                {
                    cout << current->data << " " << endl;
                    current = current->next;
                }
                cout << endl;
            }// return the value of the top node
        }

        // isEmpty operation: check if the stack is empty
        bool isEmpty()
        {
            return top == NULL; //return true if the top pointer is null
        }
};

int main()
{
    stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
    }
}