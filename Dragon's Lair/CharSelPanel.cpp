//
// Created by haxell99 on 12/09/19.
//

#include "CharSelPanel.h"

CharSelPanel::CharSelPanel(wxWindow* id) : wxPanel(id, wxID_ANY) {

    layout = new wxBoxSizer(wxVERTICAL);

    text = new wxStaticText(this, wxID_ANY, "Choose your Heroes");

    suppClasses.Add("Bard");
    suppClasses.Add("Plague Doctor");
    suppClasses.Add("Priest");
    chooseSuppChar = new wxRadioBox(this, wxID_ANY, "Support classes", wxPoint(50,100), wxSize(300,50), suppClasses);

    dpsClasses.Add("Berserker");
    dpsClasses.Add("Shadow Mage");
    dpsClasses.Add("Rogue");
    chooseDpsChar = new wxRadioBox(this, wxID_ANY, "Dps classes", wxPoint(50,170), wxSize(300,50), dpsClasses);

    tankClasses.Add("Warrior");
    tankClasses.Add("Karn");
    tankClasses.Add("Maokaivern");
    chooseTankChar = new wxRadioBox(this, wxID_ANY, "Tank classes", wxPoint(50,240), wxSize(300,50), tankClasses);

    confirm = new wxButton(this, 10001, "Confirm");

    layout -> Add(text, wxEXPAND | wxALL);
    layout -> Add(chooseSuppChar, wxEXPAND | wxALL);
    layout -> Add(chooseDpsChar, wxEXPAND | wxALL);
    layout -> Add(chooseTankChar, wxEXPAND | wxALL);
    layout -> Add(confirm, wxEXPAND | wxALL);

    this -> SetSizerAndFit(layout);
    layout->Layout();
}

CharSelPanel::~CharSelPanel() {}