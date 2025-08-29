#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include <vector>
#include "Weapon.h"
using namespace std;

class Robot {
protected:
    string name;
    int health;
    vector<Weapon> weapons;

public:
    Robot(string n);
    virtual void attack(Robot& enemy) = 0;

    void addWeapon(const Weapon& w);
    bool isAlive() const;
    void takeDamage(int dmg);
    int getHealth() const;
    string getName() const;
};

#endif
