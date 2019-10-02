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
    wxStaticText* text = nullptr;

    wxBoxSizer* layout = nullptr;

    wxRadioBox* chooseSuppChar = nullptr;
    wxRadioBox* chooseDpsChar = nullptr;
    wxRadioBox* chooseTankChar = nullptr;
    wxArrayString suppClasses = wxArrayString();
    wxArrayString dpsClasses = wxArrayString();
    wxArrayString tankClasses = wxArrayString();

    wxButton* confirm = nullptr;

};


#endif //DRAGON_S_LAIR_CHARSELPANEL_H
