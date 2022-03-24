#pragma once
#include <iostream>
using namespace std;
class Doom
{
    public:

    int px, py, pz;
    int number_of_guns;
    
    void vista()
    {
        cout <<"este juego es 3d"<<endl;
    }
    void fps()
    {
        cout <<"este juego es un fps"<<endl;
    }
};