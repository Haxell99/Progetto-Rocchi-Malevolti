//
// Created by haxell99 on 03/09/19.
//

#include "TitlePanel.h"

TitlePanel::~TitlePanel() {

}

TitlePanel::TitlePanel(wxWindow* id) : wxPanel(id, wxID_ANY) {
    fSizer = new wxGridSizer (2,1,0,0);

    wxInitAllImageHandlers();
    title = new wxBitmap("/home/haxell99/Scrivania/bitmap_sbubba/titolo.bmp", wxBITMAP_TYPE_BMP);
    bitTitle = new wxStaticBitmap(this, wxID_ANY, *title);
    fSizer -> Add(bitTitle, wxEXPAND | wxALL , wxALIGN_CENTER);

    startButton = new wxButton(this, 10000, "Start");
    titleFont = new wxFont(wxFontInfo(15).Family(wxFONTFAMILY_DECORATIVE));
    fSizer -> Add(startButton, wxEXPAND | wxALL, wxALIGN_CENTER);

    this->SetSizer(fSizer);
    fSizer -> Layout();

}
