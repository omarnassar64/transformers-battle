#include "robot.h"

Robot::Robot(string n) {
    name = n;
    health = 100;
}

void Robot::addWeapon(const Weapon& w) {
    weapons.push_back(w);
}

bool Robot::isAlive() const {
    return health > 0;
}

void Robot::takeDamage(int dmg) {
    health -= dmg;
    if (health < 0) health = 0;
}

int Robot::getHealth() const {
    return health;
}

string Robot::getName() const {
    return name;
}
