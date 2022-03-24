#include "quake.h"
#include <iostream>

class Halflife:public Quake
{
    private:
    void story()
    {
        cout <<"este juego tiene historia"<<endl;
    }
    public:
    void fisicas()
    {
        cout <<"este juego tiene fisicas"<<endl;
    }
    
};