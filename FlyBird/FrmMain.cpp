#include "FrmMain.h"
#include"FrmHomePage.h"
using namespace FlyBird;

[STAThreadAttribute]

int main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew FrmHomePage());
	return 0;
}


