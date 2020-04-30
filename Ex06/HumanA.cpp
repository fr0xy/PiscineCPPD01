#include <iostream>
#include <sstream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& club) : _name(name), _club(club) {
    return;
}

HumanA::~HumanA() {
    return;
}

void HumanA::attack() {
    std::cout << this->_name <<  " attacks with his " << this->_club.getType() << std::endl;
}