#pragma once
#include <list>
#include <Dibujo.hpp>
using namespace std;
class Sprite: public Dibujo
{
private:
    int cuadroActual = 0;
    list<Dibujo*> cuadros;
public:
    Sprite(list<Dibujo*> cuadros){
        this->cuadros = cuadros;
    }
    void Dibujar(){
        this->cudros[cuadroActual].Dibujar();
    }
    void AvanzarCuadro(){
        
    }
    ~Sprite(){}
};
