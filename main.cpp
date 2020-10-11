#include "ship/ship.hpp"
#include "ship/ship.cpp"

int main(){
    Ship myShip = Ship(10, 10);
    Ship enemyShip = Ship(10, 10);
    myShip.takeDamage(enemyShip);
}