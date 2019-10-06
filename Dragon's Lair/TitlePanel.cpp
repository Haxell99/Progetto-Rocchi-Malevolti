//
// Created by haxell99 on 03/09/19.
//

#include "TitlePanel.h"
#include "wx/stdpaths.h"
#include "wx/filename.h"

TitlePanel::~TitlePanel() {

}

TitlePanel::TitlePanel(wxWindow* id) : wxPanel(id, wxID_ANY) {
    fSizer = new wxGridSizer (2,1,0,0);

    wxStandardPaths titlep = wxStandardPaths::Get();
    wxFileName titlepath = titlep.GetResourcesDir();
    titlepath.AppendDir("bitmaps");
    titlepath.SetName("titolo");
    titlepath.SetExt("bmp");

    wxInitAllImageHandlers();
    title = new wxBitmap(wxString(titlepath.GetFullPath(wxPATH_NATIVE)) , wxBITMAP_TYPE_BMP);
    bitTitle = new wxStaticBitmap(this, wxID_ANY, *title);
    fSizer -> Add(bitTitle, wxEXPAND | wxALL , wxALIGN_CENTER);

    startButton = new wxButton(this, 10000, "Start");
    titleFont = new wxFont(wxFontInfo(15).Family(wxFONTFAMILY_DECORATIVE));
    fSizer -> Add(startButton, wxEXPAND | wxALL, wxALIGN_CENTER);

    this->SetSizer(fSizer);
    fSizer -> Layout();

}






