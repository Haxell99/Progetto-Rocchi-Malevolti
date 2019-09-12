//
// Created by haxell99 on 03/09/19.
//

#include "MainFrame.h"

BEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_BUTTON(10000, MainFrame::StartCampain)
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
