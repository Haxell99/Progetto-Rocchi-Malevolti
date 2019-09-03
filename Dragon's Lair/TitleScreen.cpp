//
// Created by haxell99 on 03/09/19.
//

#include "TitleScreen.h"

TitleScreen::TitleScreen() : wxFrame(nullptr, wxID_ANY, "Dragon's Lair"){
    titlePanel = new TitlePanel(this);
}

TitleScreen::~TitleScreen() {

}