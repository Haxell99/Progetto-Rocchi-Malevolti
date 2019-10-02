//
// Created by haxell99 on 13/09/19.
//

#include "DungeonMap.h"

DungeonMap::DungeonMap(wxWindow *id, int lvl) : wxPanel(id, wxID_ANY) {
    currentLevel = lvl;

    //TODO QUELLO SOTTO WRYYYYYYYYYYYYYYY

    text = new wxStaticText(this, wxID_ANY, "BIG BAD DUNGEON");

    levels = new wxButton*[10];

    hSizer = new wxBoxSizer(wxHORIZONTAL);
    vSizer = new wxBoxSizer(wxVERTICAL);

    for (int i = 0; i < 10; ++i) {
        wxString *label = new wxString("level ");
        *label << i+1;

        if(i==currentLevel)
            levels[i] = new wxButton(this, 10002, "current level");
        else{
            levels[i] = new wxButton(this, wxID_ANY, *label);
            levels[i] -> Disable();
        }

        hSizer -> Add(levels[i], wxEXPAND | wxALL);

        label -> ~wxString();
    }

    vSizer -> Add(text, wxEXPAND | wxALL, wxALIGN_CENTER);
    vSizer -> Add(hSizer, wxEXPAND | wxALL, wxALIGN_CENTER);

    this -> SetSizerAndFit(vSizer);
    vSizer -> Layout();

}

DungeonMap::~DungeonMap() {}
