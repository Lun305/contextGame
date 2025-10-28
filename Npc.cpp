#include "npc.h"
#include <iostream>


Npc::Npc()//êîíñòðóêòîð íå private
{
    std::cout << "Âû ñîçäàëè Npc" << endl;
}

void Npc::GetInfo() //ìåòîä êëàññà
{
    std::cout << "Èìÿ - " << name << endl;
    std::cout << "Çäîðîâüå - " << health << endl;
    std::cout << "Óðîí - " << damage << endl;
}

void Npc::Create() 
{

} 

Npc::~Npc() //äåñòðóêòîð íå private
{
    std::cout << "Npc óäàëåí" << endl;
}
