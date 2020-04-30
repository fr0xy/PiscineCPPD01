#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {
    return;
}

Zombie::~Zombie() {
    std::cout << this->name << " Died" << std::endl;
    return;
}

void Zombie::setZombie(std::string name, std::string type) {
    this->name = name;
    this->type = type;
    std::cout << this->name << " was born with type : " << this->type << std::endl;
}
void Zombie::advert(void) const{
    std::cout << "<" << this->name << " (" << this->type << ")>  Braiiiiiiinnnssss ..." << std::endl;
}