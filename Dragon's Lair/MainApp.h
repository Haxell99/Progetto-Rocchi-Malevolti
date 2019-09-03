//
// Created by haxell99 on 03/09/19.
//

#ifndef PROVACOMBATTIMENTO_MAINAPP_H
#define PROVACOMBATTIMENTO_MAINAPP_H

#include "wx/wx.h"
#include "TitleScreen.h"

class MainApp : public wxApp {
public:
    MainApp();
    ~MainApp();

    bool OnInit();

    void OnGameStart();

private:
    wxFrame* mFrame = nullptr;

};


#endif //PROVACOMBATTIMENTO_MAINAPP_H
