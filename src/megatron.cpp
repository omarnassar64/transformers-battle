#include "megatron.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Megatron::Megatron() : Robot("Megatron") {
    addWeapon(Weapon("Fusion Cannon", 9, 90, "Energy blasts"));
    addWeapon(Weapon("Fusion Sword", 18, 70, "Massive Cybertronian blade"));
    addWeapon(Weapon("Tank Mode", 60, 15, "Transform into tank"));
}

void Megatron::attack(Robot& enemy) {
    int choice = rand() % weapons.size();
    Weapon w = weapons[choice];

    cout << name << " attacks with " << w.getName() << " ... ";
    if (w.attempt()) {
        enemy.takeDamage(w.getDamage());
        cout  << enemy.getName() << " takes " << w.getDamage() << " damage." << endl;
    } else {
        cout << "Missed" << endl;
    }
    cout << enemy.getName() << " remaining health: " << enemy.getHealth() << endl;
}
