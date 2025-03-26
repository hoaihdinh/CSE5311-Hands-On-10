#pragma once

#include <functional>
#include <cmath>

#include "dbllinkedlist.hpp"

class HashTable {
    private:
        DblLinkedList *items;
        int capacity;
        int num_elements;

        std::function<int(int, int)> h; // hash function
        static int sample_hash_fn(int key, int capacity);
        void resize(double factor);

    public:
        HashTable(int inital_size);
        HashTable(int inital_size, std::function<int(int, int)> hash_fn);

        int  getCapacity();
        void insert(int key, int value);
        void remove(int key);
        void print();
        int  fetch(int key);
    
        ~HashTable();

};