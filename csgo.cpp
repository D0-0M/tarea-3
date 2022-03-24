#include "halflife.h"
#include <iostream>
using namespace std;
class Csgo:public Halflife
{
    protected:
    int numero_de_granada;
    public:
    void competitivo()
    {
        cout <<"este juego es competitivo"<<endl;
    }
    int main()
    {

        Csgo csgo;
        csgo.competitivo();
        csgo.fisicas();
        csgo.multiplayer();
        csgo.vista();
        csgo.fps();
        return 0;
    }

};