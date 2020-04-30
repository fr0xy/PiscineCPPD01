#ifndef PONY_H
# define PONY_H
# include <iostream>

class Pony {
    public:
        Pony(std::string name, std::string color, int age);
        void Growup(void);
        ~Pony();
    private:
        std::string name;
        std::string color;
        int age;
};

#endif