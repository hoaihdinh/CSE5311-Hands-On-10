// Author: Hoai Dinh
#pragma once

#define LL_SUCCESS      0
#define LL_EMPTY       -1
#define LL_NOT_FOUND   -2

struct Node {
    int key;
    int value;
    Node *next;
    Node *prev;
};

class DblLinkedList {
    private:
        Node *head;

    public:
        DblLinkedList();
        
        Node* getHead();
        Node* search(int target);
        void  insert(int key, int newValue);
        int   remove(int target);
        void  print();

        ~DblLinkedList();
};