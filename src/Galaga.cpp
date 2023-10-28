#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <curses.h>
#include <VacaNave.hpp>
#include<Bala.hpp>
#include<Arma.hpp>

int main(int argc, char const *argv[])
{

    Ventana ventana;
    VacaNave *nave1 = new VacaNave(0, 0);
    VacaNave *nave2 = new VacaNave(100, 0);
    VacaNave *nave3 = new VacaNave(50, 50);

    Arma* arma = new Arma();
    Bala* bala= new  Bala(0,0);

    nave1->RecojerArma(arma);

    list<Dibujo *> dibujos;
    dibujos.push_back(nave1);
    
    dibujos.push_back(arma);
    dibujos.push_back(bala);


    list<Actualizable *> actualizables;
    actualizables.push_back(nave1);
   
    actualizables.push_back(bala);


    while (true)
    {
        int key = getch();
        if (key == 'q' || key == 'Q')
        {
            break;
        }
        if (key == 'a' || key == KEY_LEFT)
        {
            nave1->DesplazarIzquierda();
        }
        if (key == 'd' || key == KEY_RIGHT)
        {
            nave1->DesplazarDerecha();
        }
        
        if(key == ' ')
        {
            arma->Disparar();
        }
        if(key == 'p')
        {
            bala->CambiarDireccion();
        }

        
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }

    return 0;
}
