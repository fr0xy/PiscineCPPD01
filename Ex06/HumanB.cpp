#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name) {
    return;
}

HumanB::~HumanB() {
    return;
}

void HumanB::attack() {
    std::cout << this->_name <<  " attacks with his " << this->_club->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& club) {
    this->_club = &club;
}