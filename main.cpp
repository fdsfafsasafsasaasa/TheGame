#include "ship/ship.cpp"

int main(){
    Ship myShip = Ship(10, 10, "moe");
    Ship enemyShip = Ship(10, 15, "lester");
    myShip.takeDamage(enemyShip);
}