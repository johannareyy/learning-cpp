#include <iostream>

// wxWidgets "Hello World" Program
#include <wx/wxprec.h>
#include <wx/wx.h>

/*
 Projeto exemplo de um programa com interface gráfica usando wxWidgets.
 Fonte: https://docs.wxwidgets.org/trunk/overview_helloworld.html

 Tutoriais: https://wiki.wxwidgets.org/Guides_%26_Tutorials#Tutorials

 Configurado para utilizar C++17.
 Portanto, sugere-se um compilador que suporte essa versão.

 Instalar (para GTK+3):
 Windows: https://www.wxwidgets.org/downloads/
 Ubuntu: https://wiki.codelite.org/pmwiki.php/Main/WxWidgets31Binaries#toc2   
 Fedora: sudo dnf install wxBase3 wxBase3-devel wxGTK3 wxGTK3-devel wxGTK3-gl wxGTK3-media wxGTK3-webview wxGTK3-docs

 */

void teste_compilador(){
    static_assert(__cplusplus >= 201703L,"Projeto requer compilador compatível com C++17." );
}


//
// Exemplo 1 
//

class HelloWorldApp : public wxApp{
public:
	virtual bool OnInit();
};

wxIMPLEMENT_APP(HelloWorldApp);

bool HelloWorldApp::OnInit()
{
	wxFrame *frame = new wxFrame((wxFrame*) NULL, -1, _T("Hello wxWidgets World"));
	frame->CreateStatusBar();
	frame->SetStatusText(_T("Hello World"));
	frame->Show(true);
	SetTopWindow(frame);
	return true;
}
//
// FIM Exemplo 1 
//



//
// Exemplo 2
//
/*
class MyApp : public wxApp {
public:
    virtual bool OnInit();
};

class MyFrame : public wxFrame {
public:
    MyFrame();
private:
    void OnHello(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};
enum
{
    ID_Hello = 1
};
wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit() {
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;
}

MyFrame::MyFrame()
    : wxFrame(NULL, wxID_ANY, "Hello World")
{
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
    SetMenuBar( menuBar );
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    //Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
    Bind(wxEVT_MENU, [=](wxCommandEvent&) { Close(true); }, wxID_EXIT);//C++11
}

void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a wxWidgets Hello World example",
                 "About Hello World", wxOK | wxICON_INFORMATION);
}
void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}
//
// FIM Exemplo 2
//
*/