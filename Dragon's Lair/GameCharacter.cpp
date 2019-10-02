//
// Created by haxell99 on 30/09/19.
//

#include "GameCharacter.h"

GameCharacter::GameCharacter() {

}

GameCharacter::~GameCharacter() {

}

void GameCharacter::RecieveDamage(int damage) {
    if(!protect) {
        if (damage > armor) {
            healt = healt - (damage - armor);
            armor = 0;
        } else
            armor -= damage;
    }
}
