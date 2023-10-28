#pragma once
#include <Dibujo.hpp>
#include<Actualizable.hpp>
#include<Arma.hpp>

class VacaNave: public Dibujo, public Actualizable
{
private:
    Arma* arma;
public:
    VacaNave(): Dibujo("Nave")
    {

    }
    VacaNave(int x, int y): Dibujo(x,y, "Nave"){

    }
    void Actualizar()
    {
        //this->x += 1;

    }

    void DesplazarIzquierda(){
        this->x -= 1;
    }
    void DesplazarDerecha(){
        this->x += 1;
    }
   void RecojerArma(Arma* arma)
   {
        this->arma = arma;
   }
    ~VacaNave()
    {
        
    }
};

