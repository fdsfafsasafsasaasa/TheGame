#include <iostream>

class Ship{

    public:
        void drawShip();
        unsigned int takeDamage(Ship attacker);
        std::string name;
        std::string shipType;

    private:
        int health = 50;
        int damage = 100;
        void die(Ship killer);
};
