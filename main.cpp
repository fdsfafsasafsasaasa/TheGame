#include "ship/ship.cpp"
// #include "supplyline/supplyline.cpp"
int main(){
    Ship myShip = Ship(10, 10, "moe");
    Ship enemyShip = Ship(10, 15, "the cooler moe");
    myShip.takeDamage(enemyShip);
}