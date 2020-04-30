#include <iostream>
#include <cstdlib>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n) : _size(n) {
    this->_horde = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        _horde[i].setZombie(_names[std::rand() % 5], "Basic");
    }
    return;
}

ZombieHorde::~ZombieHorde() {
    delete [] _horde;
    return;
}

void ZombieHorde::advertAll() const {
    for (int i = 0; i < this->_size; i++)
    {
        _horde[i].advert();
    }
    
}

std::string ZombieHorde::_names[5] = {
	"MrZombie",
	"MamadeZ",
	"Robert",
	"Alice",
	"Carl"
};