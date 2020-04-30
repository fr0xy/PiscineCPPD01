#include <iostream>
#include <sstream>
#include "Brain.hpp"

Brain::Brain() {
    return;
}

Brain::~Brain() {
    return;
}

std::string Brain::identify(void) const
{
	std::stringstream ss;
	ss << (void *)this;
	return ss.str();
}