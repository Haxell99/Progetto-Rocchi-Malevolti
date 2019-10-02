//
// Created by haxell99 on 03/09/19.
//

#include "MainFrame.h"

BEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_BUTTON(10000, MainFrame::StartCampain)
    EVT_BUTTON(10001, MainFrame::SetPartyMembers)
    EVT_BUTTON(10002, MainFrame::StartCombat)
END_EVENT_TABLE()

MainFrame::MainFrame() : wxFrame(nullptr, wxID_ANY, "Dragon's Lair"){
    titlePanel = new TitlePanel(this);
}

MainFrame::~MainFrame() {

}

void MainFrame::StartCampain(wxCommandEvent &evt) {
    titlePanel -> Destroy();
    charSelPanel = new CharSelPanel(this);
}

void MainFrame::SetPartyMembers(wxCommandEvent &evt) {
    charSelPanel -> Destroy();
    dungeonMap = new DungeonMap(this, currentLevel);
    currentLevel ++;
}

void MainFrame::StartCombat(wxCommandEvent &evt) {
    dungeonMap -> Destroy();
    combatPhase = new CombatPhase(this, currentLevel);
}




//Getter And Setters

TitlePanel *MainFrame::getTitlePanel() const {
    return titlePanel;
}

void MainFrame::setTitlePanel(TitlePanel *titlePanel) {
    MainFrame::titlePanel = titlePanel;
}

CharSelPanel *MainFrame::getCharSelPanel() const {
    return charSelPanel;
}

void MainFrame::setCharSelPanel(CharSelPanel *charSelPanel) {
    MainFrame::charSelPanel = charSelPanel;
}
