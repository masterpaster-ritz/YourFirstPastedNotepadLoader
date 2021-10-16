#pragma once
#include <iostream>
#include <Windows.h>
#include <ios>
#include <limits>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <string>

class CConsole
{
public:
    static void MakeSexy();

    static void SetRandomTitle();

    static void SetTitle(_In_ LPCSTR lpConsoleTitle);

    static int Print(char const* const _Format, ...);

    static int WPrint(wchar_t const* const _Format, ...);

    static void Clear();

    static void SetColor(unsigned short color);

    static void Pause();

};
std::string GetHWID();

struct S_LogType
{
    int Default = 15;
    int Warning = 6;
    int Success = 2;
    int Error = 4;
    int Info = 11;
};

void Log(std::string Message, int LogType);
void Log1(std::string Message, int LogType);