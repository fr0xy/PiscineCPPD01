#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
    ZombieEvent Event;
    Event.setZombieType("Big");
    Event.randomChump();
    Event.randomChump();
    Event.randomChump();
    Event.randomChump();
    Event.setZombieType("Little");
    Zombie *z = Event.newZombie("Rob");
    z->advert();
    delete z;
    z = Event.newZombie("Stark");
    Event.randomChump();
    z->advert();
    delete z;
    return (0);
}