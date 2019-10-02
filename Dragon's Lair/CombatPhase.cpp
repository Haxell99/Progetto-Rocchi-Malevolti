//
// Created by haxell99 on 18/09/19.
//

#include "CombatPhase.h"

BEGIN_EVENT_TABLE(CombatPhase, wxPanel)
    EVT_BUTTON(10003, CombatPhase::Attack)
wxEND_EVENT_TABLE()

CombatPhase::CombatPhase(wxWindow* id, int lvl) : wxPanel(id, wxID_ANY) {

    automatedSphere = new AutomatedSphere(lvl);

    bitmapSizer = new wxBoxSizer(wxHORIZONTAL);
    heroSizer = new wxBoxSizer(wxHORIZONTAL);
    hudSizer = new wxBoxSizer(wxHORIZONTAL);

    vSizer= new wxBoxSizer(wxVERTICAL);

    bitSupp= new wxBitmap("/home/haxell99/Scrivania/bitmap_sbubba/Bardo.tif");
    bitDps= new wxBitmap("/home/haxell99/Scrivania/bitmap_sbubba/Rogue.tif");
    bitTank= new wxBitmap("/home/haxell99/Scrivania/bitmap_sbubba/Fighter.tif");

    bitEnemy = new wxBitmap("/home/haxell99/Scrivania/bitmap_sbubba/Fighter.tif");

    supp = new wxBitmapButton(this, wxID_ANY, *bitSupp);
    dps = new wxBitmapButton(this, wxID_ANY, *bitDps);
    tank = new wxBitmapButton(this, wxID_ANY, *bitTank);

    heroSizer->Add(supp, wxEXPAND | wxALL);
    heroSizer->Add(dps, wxEXPAND | wxALL);
    heroSizer->Add(tank, wxEXPAND | wxALL);

    bitmapSizer->Add(heroSizer, wxEXPAND | wxALL);

    enemy = new wxBitmapButton(this, wxID_ANY, *bitEnemy);

    bitmapSizer->Add(enemy, wxEXPAND | wxALL);

    vSizer->Add(bitmapSizer, wxEXPAND | wxALL);

    attack = new wxButton(this, 10003, "Attack");

    hudSizer->Add(attack, wxEXPAND | wxALL);

    vSizer->Add(hudSizer, wxEXPAND | wxALL);

    heroSizer->Layout();
    bitmapSizer->Layout();
    hudSizer->Layout();
    this->SetSizerAndFit(vSizer);
    vSizer->Layout();


}

void CombatPhase::RenderFight() {

}

void CombatPhase::Attack(wxCommandEvent &evt) {
    automatedSphere->RecieveDamage(10);
    if(automatedSphere->getHealt()<=0)
        enemy->Destroy();

    evt.Skip();

}

CombatPhase::~CombatPhase() {}