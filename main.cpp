#include "ship/ship.cpp"

int main(){
    Ship myShip = Ship(10, 10, "cock and balls");
    Ship enemyShip = Ship(10, 10, "sugma lol");
    myShip.takeDamage(enemyShip);
}