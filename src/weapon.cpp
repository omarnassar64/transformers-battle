#include "Weapon.h"
#include <cstdlib>

Weapon::Weapon(string n, int d, int a, string desc) {
    name = n;
    damage = d;
    accuracy = a;
    description = desc;
}

string Weapon::getName() { return name; }
int Weapon::getDamage() { return damage; }
int Weapon::getAccuracy() { return accuracy; }
string Weapon::getDescription() { return description; }

bool Weapon::attempt() {
    int roll = rand() % 100 + 1;
    return roll <= accuracy;
}
