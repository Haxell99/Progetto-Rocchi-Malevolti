//
// Created by haxell99 on 03/09/19.
//

#ifndef DRAGON_S_LAIR_TITLEPANEL_H
#define DRAGON_S_LAIR_TITLEPANEL_H

#include "wx/wx.h"

class TitlePanel : public wxPanel{
public:
    TitlePanel(wxWindow* id);
    ~TitlePanel();

private:
    wxGridSizer* fSizer = nullptr;
    wxButton* startButton = nullptr;
    wxBitmap* title = nullptr;
    wxStaticBitmap* bitTitle = nullptr;
    wxFont* titleFont = nullptr;


};


#endif //DRAGON_S_LAIR_TITLEPANEL_H
