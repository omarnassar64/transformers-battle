#ifndef WEAPON_H
#define WEAPON_H

#include <string>
using namespace std;

class Weapon {
private:
    string name;
    int damage;
    int accuracy;
    string description;

public:
    Weapon(string n, int d, int a, string desc);
    string getName();
    int getDamage();
    int getAccuracy();
    string getDescription();
    bool attempt();
};

#endif
