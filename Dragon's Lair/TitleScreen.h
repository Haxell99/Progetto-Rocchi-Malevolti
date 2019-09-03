//
// Created by haxell99 on 03/09/19.
//

#ifndef DRAGON_S_LAIR_TITLESCREEN_H
#define DRAGON_S_LAIR_TITLESCREEN_H

#include "wx/wx.h"
#include "TitlePanel.h"
class TitleScreen : public wxFrame {
public:
    TitleScreen();
    ~TitleScreen();

private:
    TitlePanel* titlePanel = nullptr;
};


#endif //DRAGON_S_LAIR_TITLESCREEN_H
