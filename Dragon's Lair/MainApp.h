//
// Created by haxell99 on 03/09/19.
//

#ifndef PROVACOMBATTIMENTO_MAINAPP_H
#define PROVACOMBATTIMENTO_MAINAPP_H

#include "wx/wx.h"
#include "MainFrame.h"

class MainApp : public wxApp {
public:
    MainApp();
    ~MainApp();

    bool OnInit();

    MainFrame *getMFrame() const {
        return mFrame;
    }

private:
    MainFrame* mFrame = nullptr;

};

DECLARE_APP(MainApp);


#endif //PROVACOMBATTIMENTO_MAINAPP_H
