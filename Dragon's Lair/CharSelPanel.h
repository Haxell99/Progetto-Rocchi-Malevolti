//
// Created by haxell99 on 12/09/19.
//

#ifndef DRAGON_S_LAIR_CHARSELPANEL_H
#define DRAGON_S_LAIR_CHARSELPANEL_H

#include "wx/wx.h"

class CharSelPanel : public wxPanel{
public:
    CharSelPanel(wxWindow* id);
    ~CharSelPanel();

private:
    wxBoxSizer* vSizer = nullptr;
    wxGridSizer* gSizer = nullptr;

};


#endif //DRAGON_S_LAIR_CHARSELPANEL_H
