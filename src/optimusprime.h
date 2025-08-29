#ifndef OPTIMUSPRIME_H
#define OPTIMUSPRIME_H

#include <iostream>
#include <cstdlib>
#include "robot.h"
#include "Weapon.h"

class OptimusPrime : public Robot {
public:
    OptimusPrime();                
    void attack(Robot& enemy) override;  
};

#endif
