#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon {
    public:
        Weapon(std::string type);
        void setType(std::string type);
        const std::string& getType(void) const;
        ~Weapon();
    private:
        std::string _type;
};

#endif