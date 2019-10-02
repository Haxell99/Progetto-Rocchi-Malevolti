//
// Created by haxell99 on 30/09/19.
//

#ifndef DRAGON_S_LAIR_ENEMY_H
#define DRAGON_S_LAIR_ENEMY_H

#include "GameCharacter.h"

class Enemy : public GameCharacter{
public:
    Enemy();

    ~Enemy();

    int getGivenGold() const {
        return givenGold;
    }

    void setGivenGold(int givenGold) {
        Enemy::givenGold = givenGold;
    }

    int getGivenExp() const {
        return givenExp;
    }

    void setGivenExp(int givenExp) {
        Enemy::givenExp = givenExp;
    }

    bool isTaunted() const {
        return taunted;
    }

    void setTaunted(bool taunted) {
        Enemy::taunted = taunted;
    }

    const std::string &getDescription() const {
        return description;
    }

    void setDescription(const std::string &description) {
        Enemy::description = description;
    }

protected:
    int currentTurn;
    int givenGold;
    int givenExp;
    bool taunted;
    std::string description;
};

#endif //DRAGON_S_LAIR_ENEMY_H

