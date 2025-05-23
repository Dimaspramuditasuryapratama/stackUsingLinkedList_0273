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

