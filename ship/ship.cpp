#include <iostream>
#include <list>
#include <stdio.h>
#include "ship.hpp"


Ship::Ship(unsigned int health, unsigned int damage, std::string name){
    health = health;
    damage = damage;
    name = name;
}

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
    std::cout << "You got killed by " << killer.name << "." << std::endl;
    this->health = 0;
};

std::list<float> Ship::DistanceTo(Ship otherShip){
    float xDistanceTo = this->xPos - otherShip.xPos;
    float yDistanceTo = this->yPos - otherShip.yPos;

    std::list<float> distanceTo = {xDistanceTo, yDistanceTo};
    return distanceTo;
};