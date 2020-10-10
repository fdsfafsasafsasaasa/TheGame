#include "ship/ship.hpp"
#include "ship/ship.cpp"

int main(){
    Ship myShip = Ship();
    Ship enemyShip = Ship();
    myShip.takeDamage(enemyShip);
}