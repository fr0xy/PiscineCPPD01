#include <cstdlib>
#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void) {
    return;
}

ZombieEvent::~ZombieEvent() {
    return;
}

std::string ZombieEvent::_names[5] = {
	"MrZombie",
	"MamadeZ",
	"Robert",
	"Alice",
	"Carl"
};

void ZombieEvent::setZombieType(std::string type) {
    this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) const
{
	return new Zombie(name, this->_type);
}

void	ZombieEvent::randomChump(void) const
{
	Zombie z = Zombie(ZombieEvent::_names[std::rand() % 5], this->_type);
    z.advert();
}