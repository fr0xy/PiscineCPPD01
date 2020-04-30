#include <iostream>
#include <sstream>
#include "Human.hpp"

Human::Human() {
    return;
}

Human::~Human() {
    return;
}

const Brain &Human::getBrain() {
    return(this->_brain);
}

std::string Human::identify(void) const
{
	return(this->_brain.identify());
}