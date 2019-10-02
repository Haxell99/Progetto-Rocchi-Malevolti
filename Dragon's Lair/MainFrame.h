//
// Created by haxell99 on 03/09/19.
//

#ifndef DRAGON_S_LAIR_TITLESCREEN_H
#define DRAGON_S_LAIR_TITLESCREEN_H

#include "wx/wx.h"
#include "TitlePanel.h"
#include "CharSelPanel.h"
#include "DungeonMap.h"
#include "CombatPhase.h"

class MainFrame : public wxFrame {
public:
    MainFrame();
    ~MainFrame();

    DECLARE_EVENT_TABLE();

    void StartCampain(wxCommandEvent & evt);

    void SetPartyMembers(wxCommandEvent &evt);

    void StartCombat(wxCommandEvent &evt);

    //Getter and Setter

    TitlePanel *getTitlePanel() const;
    void setTitlePanel(TitlePanel *titlePanel);
    CharSelPanel *getCharSelPanel() const;
    void setCharSelPanel(CharSelPanel *charSelPanel);

private:

    TitlePanel* titlePanel = nullptr;
    CharSelPanel* charSelPanel = nullptr;
    DungeonMap* dungeonMap = nullptr;
    CombatPhase* combatPhase = nullptr;



    int currentLevel = 0;

};


#endif //DRAGON_S_LAIR_TITLESCREEN_H
