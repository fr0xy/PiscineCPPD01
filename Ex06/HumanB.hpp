#ifndef HUMANB_H
# define HUMANB_H
# include <iostream>
# include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon& club);
    private:
        std::string _name;
        Weapon *_club;
};

#endif