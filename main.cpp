#include "ship/ship.hpp"
#include "ship/ship.cpp"

int main(){
    Ship myShip = Ship(100, 50);
    Ship enemyShip = Ship(100, 50);
    myShip.takeDamage(enemyShip);
}