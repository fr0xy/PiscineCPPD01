#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void) {
    std::cout << "HEAP" << std::endl;
    Pony *p = new Pony("Robert", "Green", 5);
    p->Growup();
    delete p;
}

void ponyOnTheStack(void) {
    std::cout << "Stack" << std::endl;
    Pony p = Pony("Carl", "Yellow", 6);
    p.Growup();
}

int main() {
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}