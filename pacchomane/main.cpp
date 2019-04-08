#include <iostream>
#include "beragsomontabaa.h"

using namespace std;

void inizializzazione();

int main()
{
    int colore=14;
    inizializzazione();
    setColor(0, 15);
    setfullscreen();
    animazione();
    do
    {
        menu(SceltMenu);
        if(SceltMenu==0)
        {
            system("CLS");
            mappa();
            gotoXY(90, 24);
            cout << "READY!";(Sleep(1200));
            do
            {
                PulisciSchermo();
                mappa();
                input();
                inputLogic();
                effettopacman();
                gotoXY(0,0);
                gotoXY(pac.x, pac.y);
                setColor(0, colore);
                cout << pac.graph << flush;
                setColor(0, 15);
                stampafantasmi();
                Sleep(50);
            }while(true);
            salvataggioFile();
            letturaPunteggi();
            Sleep(10000);
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

void inizializzazione()
{
    pac.x=92;
    pac.y=24;
    pac.vite = 1;
    gho.x1 = 91;
    gho.y1 = 18;
    gho.x2 = 90;
    gho.y2 = 18;
    gho.x3 = 93;
    gho.y3 = 18;
}
