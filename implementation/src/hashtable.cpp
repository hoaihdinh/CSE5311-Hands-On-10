#include <iostream>

#include "hashtable.hpp"

const double KNUTH_SUGGESTION = (sqrt(5) - 1) / 2;

int HashTable::sample_hash_fn(int key, int capacity)
{
    int multiplication_method_result = (int)floor(capacity * fmod((key * KNUTH_SUGGESTION), 1.0));
    return multiplication_method_result % capacity;
}

void HashTable::resize(double factor)
{
    int new_capacity = factor*capacity;
    DblLinkedList* new_items = new DblLinkedList[new_capacity];
    
    for(int i = 0; i < capacity; i++) {
        Node *tmp = items[i].getHead();
        while(tmp != nullptr) {
            int hash_value = h(tmp->key, new_capacity);

            new_items[hash_value].insert(tmp->key, tmp->value);

            tmp = tmp->next;
        }
    }
    capacity = new_capacity;
    delete[] items;
    items = new_items;
}

HashTable::HashTable(int inital_size) {
    num_elements = 0;
    capacity = inital_size;
    items = new DblLinkedList[capacity];
    h = sample_hash_fn;
}

HashTable::HashTable(int inital_size, std::function<int(int, int)> hash_fn)
{
    num_elements = 0;
    capacity = inital_size;
    items = new DblLinkedList[capacity];
    h = hash_fn;
}

int HashTable::getCapacity() {
    return capacity;
}

void HashTable::insert(int key, int value) {
    num_elements++;
    if(num_elements == capacity) {
        resize(2);
    }

    int hash_val = h(key, capacity);

    items[hash_val].insert(key, value);
    
}

void HashTable::remove(int key) {
    num_elements--;
    if(num_elements == (capacity / 4)) {
        resize(0.5);
    }

    int hash_val = h(key, capacity);

    items[hash_val].remove(key);
    
}

int HashTable::fetch(int key) {
    int hash_val = h(key, capacity);
    
    DblLinkedList &list = items[hash_val];

    if(list.getHead() != nullptr) {
        return list.search(key)->value;
    }

    return -1;
}

void HashTable::print() {
    std::cout << ">>> Hash Table <<<\nIndex\t|\tKey:Value List" << std::endl;
    for(int i = 0; i < capacity; i++) {
        std::cout << i << "\t|\t";
        items[i].print();
    }
    std::cout << std::endl;
}

HashTable::~HashTable() {
    delete[] items;
}