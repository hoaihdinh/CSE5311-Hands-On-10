#include <iostream>

#include "hashtable.hpp"

int main() {
    
    HashTable ht(4);

    ht.print();
    std::cout << "Adding (3, 999) and (10, 998)" << std::endl;
    ht.insert(3, 999);
    ht.insert(10, 998);
    ht.print();

    std::cout << "Adding keys 11-20 with values 997-988" << std::endl;
    int v = 997;
    for(int i = 11; i < 21; i++, v--) {
        ht.insert(i, v);
    }

    ht.print();

    std::cout << "Fetching key 3: " << ht.fetch(3) << std::endl;
    std::cout << "Fetching key 10: " << ht.fetch(10) << std::endl;
    std::cout << "Fetching key 20: " << ht.fetch(20) << std::endl;

    std::cout << "Removing key 20 and key 10" << std::endl;
    ht.remove(20);
    ht.remove(10);
    ht.print();

    std::cout << "Removing keys 11-17" << std::endl;
    for(int i = 11; i < 18; i++) {
        ht.remove(i);
    }
    ht.print();

    return 0;
}