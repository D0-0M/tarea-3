#include "doom.h"
#include <iostream>

class Quake:public Doom
{
    public:
    
    void multiplayer()
    {
        cout <<"este juego es multijugador"<<endl;
    }
};

