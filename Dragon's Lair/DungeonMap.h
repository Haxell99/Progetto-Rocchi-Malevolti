//
// Created by haxell99 on 13/09/19.
//

#ifndef DRAGON_S_LAIR_DUNGEONMAP_H
#define DRAGON_S_LAIR_DUNGEONMAP_H

#include "wx/wx.h"


class DungeonMap : public wxPanel{
public:
    DungeonMap(wxWindow* id, int lvl);
    ~DungeonMap();

private:
    int currentLevel;

    wxButton** levels = nullptr;

    wxBoxSizer* vSizer = nullptr;
    wxBoxSizer* hSizer = nullptr;

    wxStaticText* text = nullptr;

};


#endif //DRAGON_S_LAIR_DUNGEONMAP_H
