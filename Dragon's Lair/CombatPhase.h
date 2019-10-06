//
// Created by haxell99 on 18/09/19.
//

#ifndef DRAGON_S_LAIR_COMBATPHASE_H
#define DRAGON_S_LAIR_COMBATPHASE_H

#include "wx/wx.h"
#include "AutomatedSphere.h"


class CombatPhase : public wxPanel {
public:
    CombatPhase(wxWindow* id, int lvl);
    ~CombatPhase();

    wxDECLARE_EVENT_TABLE();

    void RenderFight();

    void Attack(wxCommandEvent &evt);

private:

    wxBoxSizer* bitmapSizer = nullptr;
    wxBoxSizer* heroSizer = nullptr;
    wxBoxSizer* hudSizer = nullptr;
    wxBoxSizer* vSizer = nullptr;

    wxBitmap* bitSupp = nullptr;
    wxBitmap* bitDps = nullptr;
    wxBitmap* bitTank = nullptr;
    wxBitmap* bitEnemy = nullptr;

    wxButton* attack = nullptr;

    AutomatedSphere* automatedSphere = nullptr;

    wxBitmapButton* supp = nullptr;
    wxBitmapButton* dps = nullptr;
    wxBitmapButton* tank = nullptr;
    wxBitmapButton* enemy = nullptr;

};


#endif //DRAGON_S_LAIR_COMBATPHASE_H
