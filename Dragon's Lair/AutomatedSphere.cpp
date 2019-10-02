//
// Created by haxell99 on 30/09/19.
//

#include "AutomatedSphere.h"

AutomatedSphere::~AutomatedSphere() {
}

AutomatedSphere::AutomatedSphere(int lvl) {
    level = lvl;
    givenExp = 100+50*level;
    givenGold = 20+5*level;
    healt = 25+5*lvl;
    startingArmor = 10+2*lvl;
    armor = startingArmor;
    name="Automated Sphere";
}

void AutomatedSphere::DoubleDefense() {
    metallicize*=2;
}

void AutomatedSphere::CarefulStrike() {
    int dmg = 5+3*level;
    armor+= 3+2*level;
}

void AutomatedSphere::Disintegrate() {
    int dmg = metallicize;
}

void AutomatedSphere::DoTurn() {
    currentTurn++;
    if(currentTurn%3==1)
        this->DoubleDefense();
    else {
        if (currentTurn % 3 == 2)
            this->CarefulStrike();
        else
            this->Disintegrate();
    }
}