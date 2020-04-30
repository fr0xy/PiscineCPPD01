#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type) {
    std::cout << this->name << " was born with type : " << this->type << std::endl;
    return;
}

Zombie::~Zombie() {
    std::cout << this->name << " Died" << std::endl;
    return;
}

void Zombie::advert(void) const{
    std::cout << "<" << this->name << " (" << this->type << ")>  Braiiiiiiinnnssss ..." << std::endl;
}