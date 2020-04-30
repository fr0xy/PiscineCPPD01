#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie {
    public:
        Zombie(std::string name, std::string type);
        ~Zombie();
        void advert(void) const;
    private:
        std::string name;
        std::string type;
};

#endif