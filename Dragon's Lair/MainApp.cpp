//
// Created by haxell99 on 03/09/19.
//

#include "MainApp.h"

IMPLEMENT_APP(MainApp)

MainApp::MainApp() {

}

MainApp::~MainApp() {

}

bool MainApp::OnInit() {
    mFrame = new TitleScreen();
    mFrame -> Show();
    mFrame -> ShowFullScreen(true);

    return true;
}

