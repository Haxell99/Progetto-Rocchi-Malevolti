//
// Created by haxell99 on 12/09/19.
//

#include "CharSelPanel.h"

CharSelPanel::CharSelPanel(wxWindow* id) : wxPanel(id, wxID_ANY) {
    vSizer = new wxBoxSizer(wxVERTICAL);
    gSizer = new wxGridSizer(3,3,0,0);

}

CharSelPanel::~CharSelPanel() {}