#include <iostream>

class Ship{

    public:

        Ship(unsigned int health, unsigned int damage){
            std::cout << "Initializing ship with health " << health << " and damage " << damage << std::endl;
        };

        void drawShip();
        unsigned int takeDamage(Ship attacker);
        std::string name;

    private:
        std::string shipType;
        int health;
        int damage;
        void die(Ship killer);
};
