#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie {
    public:
        Zombie();
        ~Zombie();
        void setZombie(std::string name, std::string type);
        void advert(void) const;
    private:
        std::string name;
        std::string type;
};

#endif