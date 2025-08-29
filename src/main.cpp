#include <iostream>
#include <cstdlib>
#include <ctime>
#include "optimusprime.h"
#include "megatron.h"
using namespace std;

int main() {
    srand(time(0));

    OptimusPrime optimus;
    Megatron mega;

    cout << "The battle begins between " 
         << optimus.getName() << " and " << mega.getName() << "\n\n";

    while (optimus.isAlive() && mega.isAlive()) {
        optimus.attack(mega);
        if (!mega.isAlive()) break;

        mega.attack(optimus);
        cout << endl;
    }

    if (optimus.isAlive())
        cout << optimus.getName() << " wins the battle!\n";
    else
        cout << mega.getName() << " wins the battle!\n";

    cout << "\nFinal Health States:\n";
    cout << optimus.getName() << ": " << optimus.getHealth() << endl;
    cout << mega.getName() << ": " << mega.getHealth() << endl;

    return 0;
}
