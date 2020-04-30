#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string nameGiven, std::string colorGiven, int ageGiven) : name(nameGiven), color(colorGiven), age(ageGiven) {
    std::cout << "Hello " << this->name << ", you are a nice " << this->color << " pony" << std::endl;
    return;
}

Pony::~Pony() {
    std::cout << "Goodbye " << this->name << std::endl;
    return;
}

void Pony::Growup(void) {
    this->age = this->age + 1;
    std::cout << this->name << " is now " << this->age << " years old" << std::endl;
}