#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {
    public:
        ZombieHorde(int n);
        ~ZombieHorde();
        void advertAll() const;
    private:
        Zombie *_horde;
        int _size;
        static std::string _names[5];
};

#endif