#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {
    public:
        ZombieEvent(void);
        ~ZombieEvent();
        void setZombieType(std::string type);
        Zombie *newZombie(std::string name) const;
        void randomChump(void) const;
    private:
        static std::string _names[5];
        std::string _type;
};

#endif