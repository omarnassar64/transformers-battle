#ifndef MEGATRON_H
#define MEGATRON_H

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "robot.h"
#include "Weapon.h"

class Megatron : public Robot {
public:
    Megatron();                
    void attack(Robot& enemy) override;  
};

#endif
