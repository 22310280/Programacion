#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
using namespace std;

class Arma: public Dibujo
{
private: 
    int numeroDisparos;
public:
    Arma(): Dibujo("Arma")
    {
        this->numeroDisparos = 5;
    }
    ~Arma(){}
    void Actualizar()
    {
        
    }
    void Disparar()
    {
        if(this->numeroDisparos > 0)
        {
            this->numeroDisparos -= 1;
        }
    }
        
};

