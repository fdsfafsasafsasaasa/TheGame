#include <iostream>
#include "ship.hpp"

unsigned int Ship::takeDamage(Ship attacker){
    this->health -= attacker.damage;
    if(this->health <= 0){
        this->die(attacker);
        return 0;
    }
    else {
        return this->health;
    };
};

void Ship::die(Ship killer){
    std::cout << "Your ass got fucked by this ship " << killer.name << "." << std::endl;
    this->health = 0;
};