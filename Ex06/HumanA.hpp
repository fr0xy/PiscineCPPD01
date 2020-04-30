#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string name, Weapon& club);
        void attack();
        ~HumanA();
    private:
        std::string _name;
        Weapon& _club;
};

#endif