// Author: Hoai Dinh

#include <iostream>

#include "dbllinkedlist.hpp"

DblLinkedList::DblLinkedList() {
    head = nullptr;
}

Node* DblLinkedList::getHead() {
    return head;
}

Node* DblLinkedList::search(int target) {
    Node *tmp = head;

    while(tmp != nullptr && tmp->key != target) {
        tmp = tmp->next;
    }

    return tmp;
}

void DblLinkedList::insert(int key, int newValue) {
    Node *tmp = new Node{key, newValue, head, nullptr};

    if(head != nullptr) {
        head->prev = tmp;
    }
    head = tmp;
}


int DblLinkedList::remove(int target) {
    if(head == nullptr) {
        return LL_EMPTY;
    }

    Node *curr = head;

    while(curr->key != target && curr->next != nullptr) {
        curr = curr->next;
    }

    if(curr->key != target) {
        return LL_NOT_FOUND;
    }
    
    if(curr == head) {
        curr->prev = nullptr;
        head = curr->next;
    }
    else if(curr->next == nullptr) {
        curr->prev->next = nullptr;
    }
    else {
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
    }

    delete curr;
    return LL_SUCCESS;
}

void DblLinkedList::print() {
    Node *tmp = head;

    while(tmp != nullptr) {
        std::cout << "[ " << tmp->key << " : " << tmp->value << " ] -> ";
        tmp = tmp->next;
    }
    std::cout << "[ NULL ]" << std::endl;
}

DblLinkedList::~DblLinkedList() {
    Node *cleanUpCrew = head;

    while(head != nullptr) {
        head = head->next;
        delete cleanUpCrew;
        cleanUpCrew = head;
    }
}