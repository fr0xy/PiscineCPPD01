#include <iostream>
#include <sstream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
    return;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}

const std::string& Weapon::getType(void) const {
    return(this->_type);
}
Weapon::~Weapon() {
    return;
}