#include "def.h"

//this example if for changing valuse as a simple trainer for offline games!!
// this wont help u make esp this if for when your learning simple c++ & cheat development
// if u need help dm me Asmodeuš#6666 or join my discord server discord.gg/juul


using namespace std;

HWND hwnd = GetWindowA(NULL, "Game"); // change to game handle 


//add offsets here
// examples

int AmmoOffset = 0x345345; // your offsets
int HealthOffset = 0x45345;// your offsets

int NewAmmo = 199;// your offsets
int NewHealth = 24034;// your offsets

int Player = 0x3454;// your offsets

DWORD procId = GetProcId("Game.exe") // change for your game

int main()
{

    SetConsoleTitle("Basic Cheat Table Helper || https://discord.gg/sy3Jdyas");

    if(hwnd == NULL)
    {
        cout << "Could Not Find Game Window\n";
        Sleep(2500);
        Exit(0);
    }
    else{

        if(procId)
        {
             cout << "proc Was Found\n";
              localplayer = moduleBase + 0x3Afds
        }
        else{
            cout << "Process Was Not Found\n";
            Sleep(2500);
            Exit(0);
        }
            hProcess* = OpenProcess(PROCESS_ALL_ACCESS, NULL, procId); 
            DWORD moduleBase = GetModuleBaseAddress(procId, "game.exe"); // change the exe name to the games exe name

           
        cout << "hProcess = " << hex <<  hProcess << " \n";
        cout << ""
        cout << "Cheat Helper || Made By Lëgend#0283\n"; // your menu
        cout << "\n\n\n";// your menu
        cout << "Join For Cheats & Help https://discord.gg/sy3Jdyas\n";// your menu
        cout << "\n\n";// your menu
        cout << "[F1] Unlimited Ammo\n";// your menu
        cout << "[F2] Unlimited Health\n";// your menu
    

        if(GetAsynicKeyState(VK_F1) &0x1) // your options here
        {
            
            WriteProcessMemory(hProcess, (BYTE*)AmmoOffset, &NewAmmo sizeof(NewAmmo), 0);
        
            return menu();
        }

        if(GetAsynicKeyState(VK_F2) &0x1)// your options here
        {
           
            WriteProcessMemory(hProcess, (BYTE*)HealthOffset, &NewHealth sizeof(NewHealth), 0); // changing the offset health to our new one aka NewHealth

            return menu();
        }
    } return 0;
}
