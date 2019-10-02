//
// Created by haxell99 on 30/09/19.
//

#ifndef DRAGON_S_LAIR_AUTOMATEDSPHERE_H
#define DRAGON_S_LAIR_AUTOMATEDSPHERE_H

#include "Enemy.h"

class AutomatedSphere : public Enemy {
public:
    AutomatedSphere(int lvl);

    ~AutomatedSphere();

    void DoubleDefense();

    void CarefulStrike();

    void Disintegrate();

    void DoTurn();

private:
    int metallicize {3};

};

#endif //DRAGON_S_LAIR_AUTOMATEDSPHERE_H
