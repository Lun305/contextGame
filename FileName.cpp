
#include <windows.h>
#include <iostream>
#include "Header.h"
#include <cmath>
#include "npc.h"
#include "warrrior.h"
#include "Wizard.h"
#include "Paladin.h"
#include "worldevil.h"
//#include "nililay.h"


//ìîäèôèêàòîðû äîñòóïà:
//private - ïðèâàòíûé, ìîæíî èñïîëüçîâàòü òîëüêî âíóòðè ñàìîãî êëàññà
//protected - çàùèùåííûé, âíóòðè êëàññà îñíîâíîãî è êëàññîâ íàñëåäíèêîâ
//public - îáùåäîñòóïíûé, ìîæíî èñïîëüçîâàòü âåçäå, â òîì ÷èñëå â îñíîâíîì ïîòîêå ïðîãðàììû

using namespace std;

class Player
{
    public:
        void Create(Npc* player)
        {
            player->Create();
        }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Warrior* warrior = new Warrior();
    Warrior* warrior2 = new Warrior();

    cout << "\nðàâíû ëè âîéíû?(1-äà,0-íåò)\n" << (*warrior == *warrior2) << endl << endl;

    Wizard* wizard = new Wizard();
    Wizard* wizard1 = new Wizard();
    Wizard* wizard2 = new Wizard();
    Wizard* megaWizard = new Wizard();
    *megaWizard = *wizard1 + *wizard2;
    cout << "\n\n***Ìåãàâèçàðä***\n";
    megaWizard->GetInfo();
    cout << "***Ìåãàâèçàðä***\n\n";
    
    /*
    Paladin* paladin = new Paladin();
    *paladin = *wizard + *warrior;
    cout << "\n\n***Paladin***\n";
    paladin->GetInfo();
    cout << "***Paladin***\n\n";*/

    Player* player = new Player();

    cout << "ïðèâåò, ïóòíèê\nïðèñÿäü ó êîñòðà è ðàññêàæè î ñåáå\n";
    cout << "Òû â ïåðâûå òóò?(1 - íîâûé ïåðñîíàæ, 2 - çàãðóçèòü)\n";
    unsigned short choise = 1;
    //ñîçäàòü óíèêàëüíóþ ôóíêöèþ äëÿ ïðîâåðêè óñëîâèÿ âûáîðà
    cin >> choise;
    while (choise > 2 || choise < 1)
    {
        cout << "Íàâåðíîå, òû îøèáñÿ, ïîâòîðè ñíîâà\n";
        cin >> choise;
    }

    if (choise == 1)
    {
        cout << "ðàññêàæè î ñåáå\n\t1 - Âîèí\n\t2 - Âîëøåáíèê\n\t3 - Ïàëàäèí";
        //______________________________
        //âûçâàòü òó ñàìóþ ôóíêöèþ äëÿ ïðîâåðêè óñëîâèÿ âûáîðà
        cin >> choise;
        while (choise > 3 || choise < 1)
        {
            cout << "Íàâåðíîå, òû îøèáñÿ, ïîâòîðè ñíîâà\n";
            cin >> choise;
        }

        //__________________________
        /*switch (choise)
        {
        case 1: {
        player.Create(&warrior); 
        delete wizard;
        delete paladin;
        }
        case 2: { 
        player.Create(&wizard);
        delete warrior;
        delete paladin;
        }
        case 3: { 
        player.Create(&paladin); 
        delete warrior;
        delete wizard;
        }
        }*/

    }


    //Paladin* player3 = new Paladin();
    //player3->Create();
    //delete player3;

    //cout << "Ôóíêöèÿ èç äðóãîãî ôàéëà " << sum(5, 6) << endl;
    //Nililay* Abcd = new Nililay("Bvz");
    //Abcd->HI();
    //delete Abcd;




    return 0;
}
