#include "optimusprime.h"
#include <iostream>
#include <cstdlib>
using namespace std;

OptimusPrime::OptimusPrime() : Robot("Optimus Prime") {
    addWeapon(Weapon("Ion Rifle", 6, 100, "Signature energy rifle"));
    addWeapon(Weapon("Energon Swords", 12, 80, "Twin energy blades"));
    addWeapon(Weapon("Shoulder Cannon", 45, 25, "Plasma launcher"));
}

void OptimusPrime::attack(Robot& enemy) {
    int choice = rand() % weapons.size();
    Weapon w = weapons[choice];

    cout << name << " attacks with " << w.getName() << " ... ";
    if (w.attempt()) {
        enemy.takeDamage(w.getDamage());
        cout << enemy.getName() << " takes " << w.getDamage() << " damage." << endl;
    } else {
        cout << "Missed" << endl;
    }
    cout << enemy.getName() << " remaining health: " << enemy.getHealth() << endl;
}
