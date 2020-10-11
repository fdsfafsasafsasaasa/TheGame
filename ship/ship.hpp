#include <iostream>
#include <list>

class Ship {

    public:

        /* Ship(unsigned int health, unsigned int damage){
            health = health;
            damage = damage;
        }*/

        void drawShip();
        unsigned int takeDamage(Ship attacker);
        std::string name;
        std::string shipType;
        std::list<float> DistanceTo(Ship otherShip);
    private:
        int health = 50;
        int damage = 100;
        float xPos = 50.0f;
        float yPos = 50.0f;
        void die(Ship killer);
};
