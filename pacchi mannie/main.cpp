#include <iostream>
#include "beragsomontabaa.h"

using namespace std;

int main()
{
    int colore=14;
    pac.vite = 3;
    pac.x=125;
    pac.y=22;
    gho.x1 = 70;
    gho.y1 = 10;
    setColor(0, 15);
    setfullscreen();
    animazione();
    do
    {
        menu(SceltMenu);
        if(SceltMenu==0)
        {
            system("CLS");
            do
            {
                PulisciSchermo();
                Sleep(180);
                mappa();
                input();
                inputLogic();
                effettopacman();
                gotoXY(pac.x, pac.y);
                setColor(0, colore);
                cout << pac.graph << flush;
                setColor(0, 15);
                stampafantasmi();
            }while(true);
        }else if(SceltMenu==1)
        {
            impostazioni(sceltMenu2);
            if(sceltMenu2==0)
                switch(sceglicolore(sceltColore))
                {
                case 0: //Classico
                    colore = 14;
                    break;
                case 1: //Rosso
                    colore = 12;
                    break;
                case 2: //Blue
                    colore = 9;
                    break;
                case 3: //Verde
                    colore = 2;
                    break;
                case 4: //Magenta
                    colore = 13;
                    break;
                }
            else
                scegliDifficolta(sceltColore);
        }else if (SceltMenu==2)
            gioco=false;
    }while(gioco);
    return 0;
}
